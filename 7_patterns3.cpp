#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Print n: ";
    cin>>n;
    // print the number of lines
        for(int i=1;i<=n;i++){
            // number of times pattern is printed
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
}