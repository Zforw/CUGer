//
// Created by 赵丰 on 2020/11/11.
//


#include<cmath>
#include<queue>
#include<vector>
#include<cstdio>
#include<iostream>
using namespace std;

const int f[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};
const char p[] = {'u','l','d','r'};// l,u,r,d
bool u[362881];
struct board {
    int state[10];
    vector<short> path;
} head;

int Cantor(const int *str, int n) {
    int s = 0;
    for (int i = 1; i <= n; ++i) {
        int cnt = 0;
        for (int j = i + 1; j <= n; ++j) {
            if (str[i] > str[j]) cnt++;
        }
        s += cnt * f[n - i];
    }
    return s+1;
}
bool Check(const int *Per){
    for(int i = 1;i <= 8;++i){
        if(Per[i] != i){
            return false;
        }
    }
    return Per[9] == 0;
}
void solve() {
    queue<board> Q;
    Q.push(head);
    while (!Q.empty()) {
        head = Q.front();
        Q.pop();
        if (Check(head.state)) {
            for (vector<short>::iterator it = head.path.begin();it != head.path.end();++it) {
                cout<<p[*it];
            }
            return;
        }
        int z = 1;
        for (; z <= 9; ++z) {
            if (head.state[z] == 0) {
                break;
            }
        }
        int x = (z % 3 == 0) ? (z / 3) : ((z / 3) + 1), y = (z % 3 == 0) ?3:(z%3);
        for (int i = 0; i < 4; ++i) {
            //if(*(head.path.end()))
            int nx = x + dx[i], ny = y + dy[i];
            if ((1 <= nx && nx <= 3) && (1 <= ny && ny <= 3)) {
                int zz = (nx-1)*3 + ny;
                swap(head.state[zz],head.state[z]);
                if (!u[Cantor(head.state, 9)]) {
                    u[Cantor(head.state, 9)] = true;
                    head.path.push_back(i);
                    Q.push(head);
                }
                else{
                    swap(head.state[z],head.state[zz]);
                }
            }
        }
    }
}

int main() {
    freopen("in.txt","r",stdin);
    for(int i = 1;i <= 9;++i){
        cin>>head.state[i];
    }
    solve();
    return 0;
}
//ulllddrudrddrulruldrdrd
//ullddrurdllurdruldr