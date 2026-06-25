#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s; // input a string
    
    // STL way
    int n = s.size(); // find the size of string using STL
    // int n = s.length();
    return s[n-1]; // return the last char of string

    
}