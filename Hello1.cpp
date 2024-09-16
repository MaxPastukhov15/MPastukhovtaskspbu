/* Maksim Pastukhov st131119@student.spbu.ru or maksimpastukhov15@gmail.com
 task1*/
#include <iostream>
#include <string>
#include "MP.hpp"
using namespace std;
int main(){
    hell();
    cout << endl;
    
    string s;
    cin >> s;
    while (s!="e"){
    cout << "Hello, " << s << "!" << endl;
    cin >> s;
    }
    return 0;
}
