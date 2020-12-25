#include "cmake-build-debug/Game.h"
void LOAD();
int main() {
    LOAD();
    int ch = 1;
    while (ch){
        int n,b;
        cout << "Input size and nuumber of bomb:";
        cin >> n >> b;
        if(b > n*n){
            cout << "Invalid!!!" << endl;
            continue;
        }
        Game g(n,b);
        g.showBoard(1);
        int over = 1;
        while (over){
            int x;
            cout << "Input a id of an point:";
            cin >> x;
            int state = g.mark(x);
            switch (state) {
                case STATE_INVALID_COORDINATE:
                    cout << "INVALID COORDINATE!!!" << endl;
                    continue;
                case STATE_FAILED:
                    cout << "BOOM!!! GAME OVER!!!" << endl;
                    g.showBoard(SHOW_BOMB);
                    over = 0;
                    break;
                case STATE_REPEATED_VALUE:
                    cout << "You've input this!!!" << endl;
                    continue;
                case STATE_WIN:
                    cout << "YOU WIN!!!" << endl;
                    g.showBoard(SHOW_BOMB);
                    over = 0;
                    break;
                case STATE_NORMAL:
                    continue;
            }
        }
        ch = -1;

        while (ch != 0 && ch != 1){
            cout << "Continue(1) or end(0):";
            cin >> ch;
        }
    }
    cout << "-------------------------GAME  OVER-------------------------";
    return 0;
}
/*
 * Load the program
 */
void LOAD(){
    cout << "-------------------------Sweep Bomb-------------------------" << endl;
    cout << "In this game,your mission is to find all the bombs.The numbers\n"
            "on every point means that how many bombs are around it.\n";
    int i = 0;
    char bar[51]={0};
    const char *lable = "|/-\\";
    bar[0] = '#';
    while (i < 50)
    {
        bar[i] = '#';
        printf("[%d%%][%c][%s]\r",(i+1)*2, lable[i%4],bar);
        fflush(stdout);
        i++;
        usleep(100000);
    }
    printf("\n");
}