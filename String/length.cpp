#include <iostream>
#include <cstring>
using namespace std;

int main (int argc, char const* argv[]){
    string s;

    cout << "Enter a random vocabulary: ";
    cin >> s;

    //strlen() requires const char* data type, so we need use .data() to obtain the pointer
    const char * p = s.data();

    cout << "The length of this vocabulary is " << strlen(p) << endl;
    return 0;
}