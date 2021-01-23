#ifndef NuKe_display_H_
#define NuKe_display_H_

#include <iostream>
#include <vector>

namespace NuKe{
    class Display{
        public:
        Display(int height,int width,std::vector<std::string> pattern);
        int input(std::vector<std::vector<int>> data);
        void show();
        private:
        int height;
        int width;
        std::vector<std::vector<int>> data;
        std::vector<std::string> pattern;
    };
}

#endif