#ifndef NuKe_game_H_
#define NuKe_game_H_

#include <iostream>
#include <vector>

#include "player.h"
namespace NuKe{
    class Game{
        public:
            Game(int height,int width,std::vector<std::vector<int>> data,std::vector<int> pattern);
            std::vector<std::vector<int>> getdata();
            int getstate(int y,int x);
            void setstate(int y,int x,int val);
            int getpattern(int val);
            std::vector<Player*> players;
        private:
            int height;
            int width;
            std::vector<std::vector<int>> data;
            std::vector<int> pattern;
    };
}

#endif