/*
Calculate a mean value of (x*y)/(x+y)
if the sum of x+y = 0, then return "The sum should not be ZERO" and continue to ask for input
assume only two float number will be the input value
*/

#include <iostream>
#include <string>
using namespace std;

float averageValue(float x, float y){
    if((x+y) == 0)
        throw "The sum should not be ZERO";

    return (x*y)/(x+y);
}

int main (int argc, char const * argv []){
    float a, b;

    while(1){
        cout << "Please enter two value and space them in the middle:";
        cin >> a >> b;

        try{
            cout << averageValue(a,b) << endl;
        }
        catch(const char * errMsg){
            cerr << errMsg << endl;
        }
    }

    return 0;
}