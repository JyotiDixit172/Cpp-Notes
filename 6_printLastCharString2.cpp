//  figure out when input the string at the same time
//  it means you are not allowed to input string in a single go.

// ask the interviewer can I use getline (cin, s) as it give more control to user & is quite user-friendly.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    cout<<"Enter String: ";
    getline(cin,s);
    
    cout << s.back();
    // int n =s.size();
    // cout<< s[n-1];
}