//
// Created by 赵丰 on 2020/12/25.
//
using namespace std;
#include<cstdio>
#include<unistd.h>
#include<ctime>
#include<queue>
#include<iomanip>
#include<cstdlib>
#include<iostream>
#ifndef SWEEPBOMB_GAME_H
#define SWEEPBOMB_GAME_H

//the return value of mark()
#define STATE_REPEATED_VALUE 3
#define STATE_INVALID_COORDINATE -1
#define STATE_FAILED 0
#define STATE_NORMAL 1
#define STATE_WIN 2

//the param of ShowBoard()
#define SHOW_ID 0
#define SHOW_NORMAL 1
#define SHOW_BOMB 2

//value of map,0+ means the Count()
#define BOMB -1
#define UNUSED -2

//delta x,y
const int dx[4] = {0,1,-1,0};
const int dy[4] = {1,0,0,-1};
class Game {
public:
    //N:size,n:number of bomb
    Game(int SZ,int b):N(SZ),n(b){
        init();
    }
    ~Game(){
        //free the memory of map and u
        delete map;
        delete u;
        map = NULL;
        u = NULL;
    }
    //initialize
    void init();
    //print the Board
    void showBoard(int);
    //mark the point
    int mark(int);
    //find the connected blocks
    int dfs(int,int);
    //calculate the bombs around it
    int Count(int,int);
    inline bool Check(int i,int j)
    {
        return (i < 0 || i >= N || j < 0 || j >= N)?true:false;
    }
private:
    int **map = nullptr;//save the board
    int **u = nullptr;  //save the state of dfs
    int N,n;
    int score;
    pair<int,int> getCord(int);//convert the id into coordinate
};


#endif //SWEEPBOMB_GAME_H
