#include "game.h"

namespace NuKe{
    Game::Game(int height,int width,std::vector<std::vector<int>> data,std::vector<int> pattern){
        this->height = height;
        this->width = width;
        this->data = data;
        this->pattern = pattern;
    }
    std::vector<std::vector<int>> Game::getdata(){
        return this->data;
    }
    int Game::getpattern(int val){
        return this->pattern.at(val);
    }
    bool Player::ismovable(int y,int x){
        int state = ingame->getstate(y,x);
        int retn = 1;
        if(ingame->getpattern(state) == 1){
            retn = 0;
        }
        return retn;
    }
    void Player::move(int y,int x){
        if(this->ismovable(y,x)){
            if(this->isapple(y,x)){
                this->eat(1);
            }
            ingame->setstate(p_y,p_x,0);
            ingame->setstate(y,x,2);
        }
    }
    
    int Game::getstate(int y,int x){
        return this->data.at(y).at(x);
    }
    void Game::setstate(int y,int x,int val){
        this->data.at(y).at(x) = val;
    }
    bool Player::isapple(int y,int x){
        int state = ingame->getstate(y,x);
        int retn = 0;
        if(ingame->getpattern(state) == 3){
            retn = 1;
        }
        return retn;
    }
    void Player::eat(int val){
        score += val;
    }
}