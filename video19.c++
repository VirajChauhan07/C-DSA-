#include<algorithm>
#include<set>
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<queue>//also for priority queue
#include<map>


using namespace std;
// C++ STL 
// 1).Algorithm
// 2).Containers 
// Array STL is static array

// *****************************************//

// int main(){
// array<int,4> a={1,2,3,4};
// // STL Declaration of array
// int size = a.size();
// // Use to find the size of the array
// for(int i=0;i<size;i++){
//     cout<<a[i]<<endl;
// }
// // use to print the elemnt of array
// cout<<"Element at 2nd Index :"<<a.at(2)<<endl;
// // use to print the element at particular index
// cout<<"Empty or not :"<<a.empty()<<endl;
// // use to check whether it is empty or not 
// cout<<"First Element : "<<a.front()<<endl;
// // use to print the first element 
// cout<<"Last Element : "<<a.back()<<endl;
// // use to print he last element 
// }

// *****************************************//

// int main(){

//     vector<int> v;
//     // Differnet ways of Intialization
//     vector<int> a(5,1);
//     // number of element is 5 and value is 1
//     cout<<"Capacity -->"<<v.capacity()<<endl;
//     cout<<"Size-> "<<v.size()<<endl;
//     // Size means total number of element 
//     // Capacity means number of assigned memory 
//     vector<int> last(a);
//     for(int i:last){
//         cout<<i<<" ";
//     }cout<<endl;

//     for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;
//     // It is use to check the capacity of the vector array.
//     v.push_back(1);
//     cout<<"Capacity -->"<<v.capacity()<<endl;
//     cout<<"Size-> "<<v.size()<<endl;
//     // push_back function it is use to push the value in the array 
//     v.push_back(2);
//     cout<<"Capacity -->"<<v.capacity()<<endl;
//     cout<<"Size-> "<<v.size()<<endl;    

//     v.push_back(3);
//     cout<<"Capacity -->"<<v.capacity()<<endl;
//     cout<<"Size-> "<<v.size()<<endl;

//     cout<<"Front -->"<<v.front();
//     // print the first element of the vector
//     cout<<"back -->"<<v.back()<<endl;
//     //  print the last element of the vector
//     cout<<"Before Pop "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.pop_back();

//     cout<<"After Pop "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"Before clear : "<<v.size() <<" Capacity "<<v.capacity()<<endl;
//     v.clear();
//     cout<<"after clear : "<<v.size()<<" Capacity "<<v.capacity()<<endl;

//     // cout<<"Size-->"<<v.size()<<endl;
//     // size function is use to show the size of the vector


// }

// *****************************************//

// int main(){
//     deque<int> d;

//     d.push_back(1);
//     d.push_front(2);
//     for(int i:d){
//         cout<<i<<" ";
//     }
//     // d.pop_back();
//     cout<<endl;
//     // for(int i:d){
//     // cout<<i<<" ";
//     // }

//     cout<<"print the First Index"<<d.at(1)<<endl;

//     cout<<"front "<<d.front()<<endl;

//     cout<<"Back "<<d.back()<<endl;

//     cout<<"Empty or not "<<d.empty()<<endl;

//     cout<<"before erase "<<d.size()<<endl;

//     d.erase(d.begin(),d.begin()+1);

//     cout<<"after erase "<<d.size()<<endl;         
// }

// *****************************************//

// int main(){

//     list<int> l;

//     list<int> n(5,10);

//     for(int i:n){
//         cout<<i<<" ";
//     }cout<<endl;

//     l.push_back(1);

//     l.push_front(2);

//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;
//     l.erase(l.begin());
//     cout<<"after Erase "<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }

//     cout<<"size of list "<<l.size()<<endl;
// }

// *****************************************//

// int main(){

//     stack<int> s;

//     s.push(1);
//     s.push(2);
//     s.push(3);

//     cout<<"Top Element "<<s.top()<<endl;

//     s.pop();
//     cout<<"Top Element "<<s.top()<<endl;

//     cout<<"size of stack "<<s.size()<<endl;

//     cout<<"Empty or not "<<s.empty()<<endl;

// }

// *****************************************//


// int main(){

//     queue<string> q;

//     q.push("viraj");
//     q.push("chauhan");
//     q.push("Singh");

//     cout<<"the Size before Pop "<<q.size()<<endl;

//     cout<<"First Element "<<q.front()<<endl;
//     cout<<"last Element "<<q.back()<<endl;
//     q.pop();
//     cout<<"First Element "<<q.front()<<endl;

//     cout<<"Size after pop "<<q.size()<<endl;

// }

// *****************************************//
// Priority Queue

// int main(){

//     priority_queue<int> maxi;
//     priority_queue<int,vector<int>,greater<int> >mini;

//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(4);
//     cout<<"Size--> "<<maxi.size()<<endl;
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;



//     mini.push(5);
//     mini.push(3);
//     mini.push(4);
//     mini.push(0);
//     mini.push(1);
//     cout<<"Size--> "<<mini.size()<<endl;
//     int m= mini.size();
//     for(int i=0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
//     cout<<endl;

//     cout<<" Is it empty or what "<<maxi.empty()<<endl;
// }

// *****************************************//

// int main(){

//     set<int> s;
//     s.insert(5);
//     s.insert(4);
//     s.insert(3);
//     s.insert(2);
//     s.insert(8);
//     s.insert(1);

//     for(int i:s){
//         cout<<i<<endl;
//     }cout<<endl;
    
//     set<int>::iterator it = s.begin();
//     it++;

//     s.erase(it);

//     for(auto i:s){
//         cout<<i<<endl;
//     }

//     cout<<"S is present or not "<<s.count(-5)<<endl;

//     set<int>::iterator itr =s.find(5);

//     for(auto it=itr;it!=s.end();it++){
//         cout<<*it<<" ";
//     }cout<<endl;
// }

// *****************************************//

// int main(){
//     map<int,string> m;

//     m[1]="Viraj";
//     m[2]="Chauhan";
//     m[3]="Singh";

//     m.insert({5,"Bheem"});
//     cout<<"before erase"<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     cout<<"m.finding --> 13"<<m.count(-13)<<endl;

//     m.erase(13);
//     cout<<"after erase "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     auto it=m.find(3);

//     for(auto i=it;i!=m.end();i++){
//         cout<<(*i).first<<endl;
//     }
// }

// *****************************************//

// int main(){

//     vector<int> v;
//     v.push_back(1);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(4);

//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;
//     cout<<"Finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl;
//     // Finding the value 
//     cout<<"LowerBound->" <<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
//     // Find the lower
//     cout<<"UpperBound->" <<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

//     int a=3;
//     int b=5;

//     cout<<"max -> "<<max(a,b)<<endl;;
//     cout<<"min -> "<<min(a,b);
//     // Swap
//     swap(a,b);
//     cout<<endl<<"a-> "<<a<<endl;
//     // Reverse
//     string abcd = "abcd";
//     reverse(abcd.begin(),abcd.end());
//     cout<<"String --> "<<abcd<<endl;
//     // Rotation
//     rotate(v.begin(),v.begin()+1,v.end());
//     cout<<"after rotate "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     // Sorting of the algorithm
//     sort(v.begin(),v.end());
//     cout<<"After sorting -> "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
    
// }
