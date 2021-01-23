#include "game.h"

namespace NuKe{
    Game::Game(int height,int width,std::vector<std::vector<int>> data,std::vector<int> pattern){
        this->height = height;
        this->width = width;
        this->data = data;
        this->pattern = pattern;
        for(int i_y = 0;i_y < height;i_y++){
            for(int i_x = 0;i_x < width;i_x++){
                if(getstate(i_y,i_x) == 2){
                    Player *p = new Player(i_y,i_x,this);
                    this->players.push_back(p);
                }
            }
        }
    }
    std::vector<std::vector<int>> Game::getdata(){
        return this->data;
    }
    int Game::getpattern(int val){
        return this->pattern.at(val);
    }

    
    int Game::getstate(int y,int x){
        return this->data.at(y).at(x);
    }
    void Game::setstate(int y,int x,int val){
        this->data.at(y).at(x) = val;
    }
}