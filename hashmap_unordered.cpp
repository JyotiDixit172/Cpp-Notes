#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    //  this <int,int> is a template
    // creation
    unordered_map<string,int> mp;

    // insertion -> <string, int> pair type data
    // 1. Pair created of data string, int -> method 1
    pair<string,int> p = make_pair("babbar", 3);
    mp.insert(p);  

    // 2. method 2 
    pair<string,int> p2("Jyoti",2); 
    mp.insert(p2);   

    // 3. method -> 1st time creation 
    mp["Dixit"] = 3; 
    // What will happen here ? -> 2nd time Value insertion on same key -> Value will get updated
    // so you will not find, duplicat keys in the hashmap
    // then why does collisions occur in the hashmap ? 
    mp["Dixit"] = 4;
    
    // single entry for every key
    return 0;
     
}

