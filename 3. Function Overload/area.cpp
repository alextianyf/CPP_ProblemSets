#include <iostream>
#include <cmath>

using namespace std;

float surfaceArea(float l1){
    return 3.14*l1*l1;
}

float surfaceArea(float l1, float l2){
    return l1*l2;
}

float surfaceArea(float l1, float l2, float l3){
    // Heron's formula
    float p = (l1+l2+l3)/2;
    return sqrt(p*(p-l1)*(p-l2)*(p-l3));
}

int main(int argc, char const* argv[]){
    //rad of circle
    float r = 8.2;

    // edge length of rectangle
    float w = 3.7;
    float h = 5.9;

    //edge length of triangle
    float e1 = 6.6;
    float e2 = 7.2;
    float e3 = 8.3;

    cout << "area of circle: " << surfaceArea(r) << endl;
    cout << "area of rectangle: " << surfaceArea(w,h) << endl;
    cout << "area of triangle: " << surfaceArea(e1,e2,e3) << endl;



}