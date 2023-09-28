#include "kitty.h"

kitty::kitty(float w, gender s, colors c){
    weight = w;
    sex = s;
    color = c;

    std::cout << "You have created a cat!" << std::endl;
}

void kitty::eat(){
    if(weight >=5){
        std::cout << "I am overweighted" << std::endl;
        return;
    }
    std::cout << "eating yum yum yum" << std::endl;
    weight++;
}

void kitty::info(){
    std::cout << "My weight: " << weight << std::endl;

    if(sex == male)     std::cout << "Sex: male" << std::endl;
    else                std::cout << "Sex: female" << std::endl;

    switch (color)
    {
    case black:
        std::cout << "Color: black" << std::endl;
        break;
    case white:
        std::cout << "Color: white" << std::endl;
    case brown:
        std::cout << "Color: brown" << std::endl;
    default:
        break;
    }
}