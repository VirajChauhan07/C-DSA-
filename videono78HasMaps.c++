#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    map<string, int> m;

    // insertion

    // 1
    pair<string, int> p =make_pair("babbar",3);
    m.insert(p);

    // 2
    pair<string, int> pair2("love",2);
    m.insert(pair2);

    // 3
    m["mera"]=1;

    m["mera"]=2;

    // search
    cout<<m["mera"]<<endl; 
    cout<<m.at("babbar")<<endl;

    cout<<m["unknownKey"]<<endl; 
    cout<<m.at("unknownKey")<<endl;

// to check presence
cout<< m.count("love")<<endl;

// size
cout<< m.size()<<endl;

//  erase
m.erase("love");
cout<< m.size()<<endl;

// iterator
map<string,int> :: iterator it = m.begin();

while(it != m.end()){
    cout<< it->first << " " << it->second<<endl;
    it++;
}



    return 0;
}