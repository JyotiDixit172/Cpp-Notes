#include <iostream>
using namespace std;

int main(){
    /*
    Printing this pattern

    * * * *
    * * * *
    * * * *
    * * * *

    */

    for(int i=1;i<=4;i++){
        // print the number of stars need to print in one line.
        for(int j=1;j<=4;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}