#include "display.h"

namespace NuKe{
    Display::Display(int height,int width,std::vector<std::string> pattern){
        this->height = height;
        this->width = width;
        this->pattern = pattern;
    }
    void Display::show(){
        for(int i_y = 0;i_y < height;i_y++){
            for(int i_x = 0;i_x < width;i_x++){
                printf("%s ",pattern.at(data.at(i_y).at(i_x)).c_str());
            }
            printf("\n");
        }
    }
    int Display::input(std::vector<std::vector<int>> data){
        this->data = data;
        return 1;
    }
}