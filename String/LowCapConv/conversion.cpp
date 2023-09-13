#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const* argv[]){

    string s;
    cout << "Please enter a random word: ";
    cin >> s;

    int step = 'a' - 'A';

    for (int i = 0; i < strlen(s.data()); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - step;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + step;
        }
    }


    cout <<"The converted result is: " << s << endl;

}