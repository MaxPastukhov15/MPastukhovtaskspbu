/* Maksim Pastukhov st131119@student.spbu.ru or maksimpastukhov15@gmail.com
 task1*/
#include <iostream>
#include <string>
#include "hello.hpp"
using namespace std;
int main(){
    hell();
    cout << endl;
    
    string s;
    cout << "Write name or e(to end programm): ";
    cin >>  s;
    while (s!="e"){
    cout << "Hello, " << s << "!" << endl;
    cout << "Write name or e(to end programm): ";
    cin >> s;
    }
    return 0;
}
