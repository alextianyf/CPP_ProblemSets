#include <iostream>
#include "kitty.h"
#include "kitty.cpp"

using namespace std;

int main(){
    kitty myCat(3, kitty::female, kitty:: black);

    myCat.info();

    myCat.eat();
    myCat.eat();
    myCat.eat();
    myCat.eat();

    myCat.info();

    myCat.actingCute();
    myCat.sleep();

    return 0;
}