#include<iostream>
#include<stdio.h>

using namespace std ;

// If you want to use heap Memory use the keyword "new"
// When we stack memory is called static allocation
// While we use heap memory it is called dynamic memory
// Dynamic memory allocation can be removed by using "delete" keyword 
// This is abad practise because the "a" a local variable 
// int& funct( int a){
//     int num = a;
//     int& ans =num;
//     return ans;
// }
// int fun(int n){
//     int* ptr =&n;
//     return ptr;
// }
void update(int n){
    n++;
}

void update2(int& n){
    n++;
}

int main()
{
    // Pass by value always pass the copy of the data 
    // Reference variable 
    // Same memory but different name 
    // syntax to create the refernce variable int &j=i
    // Why do we need reference variable 
    // arr[i]=*(arr+i)
    // int i=5;
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    // int arr[n]; it is a bad practise always declare the value in it never put in it run time 
    // stack memory will take the memory according to because it got crash due to insuuficient space provided by stack
    int n = 5;

    cout<< " Before "<< n <<endl;
    // fun(n);
    update(n);
    update2(n);
    // funct(n);
    cout<< " After " <<n <<endl;
    


}