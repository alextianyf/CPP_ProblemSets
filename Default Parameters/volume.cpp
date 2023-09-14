#include <iostream>

using namespace std;

float volumeOfCone(float radius, float height, float pi = 3.1415926){
    return (pi * radius * radius * height)/3;
}

int main(int argc, char const* argv[]){
    float r, h;
    string userInput;

    cout << "Please enter the radius: ";
    cin >> r;
    
    //clear the buffer
    while(cin.get() != '\n'){
        continue;
    }

    cout << "Please enter the height(optional) or defualt as 1: ";
    getline(cin,userInput);//obtain the input content
    
    if(!userInput.empty()){
        h = stof(userInput);
    }else{
        h = 1;
    }

    cout << "The volume of the cone is " << volumeOfCone(r,h) << endl;

}