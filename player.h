#ifndef NuKe_player_H_
#define NuKe_player_H_

#include <iostream>
#include <vector>

#include "game.h"

namespace NuKe{
    class Player{
        public:
            Player(int y,int x,Game* ingame);
            bool ismovable(int y,int x);
            void move(int y,int x);
            bool isapple(int y,int x);
            void eat(int val);
        private:
            int p_x;
            int p_y;
            int score;
            Game* ingame;
    };
}
#endif