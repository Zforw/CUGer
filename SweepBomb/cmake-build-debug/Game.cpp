//
// Created by 赵丰 on 2020/12/25.
//

#include "Game.h"

void Game::init() {
    score = 0;
    map = new int*[N];
    u = new int*[N];
    for(int i = 0;i < N;++i){
        map[i] = new int[N];
        u[i] = new int[N];
    }
    //memset(map,0,sizeof(map));
    for(int i = 0; i < N;++i){
        for(int j = 0;j < N;++j){
            map[i][j] = UNUSED;
            u[i][j] = 0;
        }
    }
    //lay bombs
    int cnt = 0;
    srand((unsigned int)time(NULL));
    while (cnt < n){
        int rx = rand()%N;
        int ry = rand()%N;//[0,N-1]
        if(map[rx][ry] != -1){
            map[rx][ry] = BOMB;
            u[rx][ry] = 1;
            cnt++;
        }
    }
}

void Game::showBoard(int cho) {

    for(int i = 0;i < 3 * N + 1;++i){
        cout << "-";
    }
    cout<<endl;
    for(int i = 0; i < N - 1;++i){
        cout << "|";
        for(int j = 0;j < N;++j){
            if(cho == SHOW_ID){
                cout << setw(2) << i*N  + (j+1) << "|";
            }
            else if(cho == SHOW_BOMB){
                if(map[i][j] == -1) cout << "💣|";
                else
                    cout << setw(2) << "  |";
            }
            else{
                if(map[i][j] == BOMB || map[i][j] == UNUSED) cout << "  |";
                else cout << setw(2) << map[i][j] << "|";
            }
        }
        cout<<endl;
        cout << "-";
        for(int k = 0;k < N -1;++k){
            cout << "--+";
        }
        cout << "---" << endl;
    }
    cout << "|";
    for(int j = 0;j < N;++j){
        if(cho == SHOW_ID) {
            cout << setw(2) << (N-1)*N + j + 1<< "|";
        }else if(cho == SHOW_BOMB){
            if(map[N-1][j] == -1) cout << "💣|";
            else cout << setw(2) << "  |";
        }else {
            if(map[N-1][j] == -1 || map[N-1][j] == -2) cout << "  |";
            else cout << setw(2) << map[N-1][j] << "|";
        }

    }
    cout<<endl;
    for(int i = 0;i < 3 * N + 1;++i){
        cout << "-";
    }
    cout<<endl;
}

int Game::mark(int cord){
    int i = getCord(cord).first,j = getCord(cord).second;
    cout << "(" << i << "," << j << ")" << endl;
    if(Check(i,j)){
        return STATE_INVALID_COORDINATE;
    }
    else if(map[i][j] == BOMB){
        return STATE_FAILED;
    }
    else if(score == N*N - n - 1){
        return STATE_WIN;
    }
    else if(map[i][j] != UNUSED){
        return STATE_REPEATED_VALUE;
    }
    else{
        int i = getCord(cord).first,j = getCord(cord).second;
        system("clear");
        showBoard(SHOW_ID);

        score += dfs(i,j);
        showBoard(SHOW_NORMAL);
        cout << "Current score : " << score << endl;
        if(score == N*N - n ){
            return STATE_WIN;
        }
        return STATE_NORMAL;
    }
}
int Game::dfs(int i,int j){
    int ans = 1;
    map[i][j] = Count(i,j);
    u[i][j] = 1;
    for(int k = 0;k < 4;++k){
        int nx = i + dx[k];
        int ny = j + dy[k];
        if(Check(nx,ny) == false){
            if(map[nx][ny] != BOMB && u[nx][ny] == 0) {
                ans += dfs(nx, ny);
            }
        }
    }
    return ans;
}
int Game::Count(int i,int j){
    int b = 0;
    for(int k = 0;k < 4;++k){
        int nx = i + dx[k];
        int ny = j + dy[k];
        if(Check(nx,ny) == false){
            if(map[nx][ny] == -1){
                b++;
            }
        }
    }
    return b;
}
pair<int,int> Game::getCord(int cord) {
    int j = cord / N;
    if(cord % N == 0) j--;
    int i = cord - j*N - 1;
    return make_pair(j,i);
}