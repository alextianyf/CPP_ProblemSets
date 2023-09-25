/*
sawp two string 'abc' and 'xyz' without using pointer
*/

#include <iostream>
using namespace std;

void swap (string &s1, string &s2){
    string temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}

int main(int argc, char const* argv[]){
    string s1 = "abc";
    string s2 = "xyz";

    swap(s1,s2);
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    return 0;
}