#ifndef NuKe_game_H_
#define NuKe_game_H_

#include <iostream>
#include <vector>

namespace NuKe{
    class Player{
        public:
            Player(Game* ingame);
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
    class Game{
        public:
            Game(int height,int width,std::vector<std::vector<int>> data,std::vector<int> pattern);
            std::vector<std::vector<int>> getdata();
            int getstate(int y,int x);
            void setstate(int y,int x,int val);
            int getpattern(int val);
        private:
            int height;
            int width;
            std::vector<Player> players;
            std::vector<std::vector<int>> data;
            std::vector<int> pattern;
    };
}

#endif