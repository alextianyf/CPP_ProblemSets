#ifndef _KITTY_H
#define _KITTY_H

#include <iostream>

using namespace std;

class kitty{
private:
    float weight;

public:
    enum gender{male, female} sex;
    enum colors{black, white, brown} color;

    kitty(float w, gender s, colors c);

    void eat();
    void sleep(){ std::cout << "sleeping" << std::endl;}
    void actingCute(){std::cout << "miu miu~" << std::endl;}
    void info();

};

#endif