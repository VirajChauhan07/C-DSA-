#include<stdio.h>
#include<iostream>
// #include --> preprocessor directories
using namespace std;


// Macros --> using #define we can create macro 
// It is used to define single value multiple time like value of pie is used multiple time to get area 
//#define p1 =3.14 
// Refer geeks for geeks
// local variable --> the variable which can be accessed inside the function only
// global Variable -->  It can be accessed from any part of the program it can be modified very easily                          


// #define PI 3.14;
// int score = 15;
// void a(int& i){
//     cout<<score<<" in a" <<endl;
//     score++;
//     char ch ='a';
//     cout<<i<<endl;

// }
// void b(int& i){
//     cout<<score<<" in b"<<endl;
// //     cout<<i<<endl;
// // }
// int main ()
// {
//     // int r = 5;

//     // double area =   r * r * PI;

//     // cout << "Area is "<< area <<endl;

//     // cout<<score<<"In main "<<endl;
//     // int i=5;
//     // a(i);
//     // b(i);

//     return 0;
// }

// Inline function --> it is used to reduce the function call overhead 
// Conditon of inline funciton --> is the body of function in sinle line then it is consider as inline function 
// In these the funtion will replaced by the function called in main function
// No extra Memory Usage 
// No function call overhead
// Tertiary operator if and else can be written in single line example given below 
// inline int getMax(int& a ,int& b){
//     return (a>b) ? a:b;
// }

// int main(){
//     int a=1,b=2;
//     int ans=0;

//     // if(a>b){
//     //     ans=a;
//     // }
//     // else{
//     //     ans=b;
//     // }
//     ans = getMax(a,b);
//     ans = (a>b) ? a:b;
//     a=a+2;
//     b=b+1;
//     ans = getMax(a,b);
//     ans = (a>b) ? a:b;
// }

// Default Arguments --> if the conditon is given then okay or give it the deafult statement or value 

void print(int arr[],int n ,int start=0){

    for(int i =start; i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5] ={1,4,7,8,9};
    int size=5;

    print(arr,size);
    cout<<endl;
    print(arr,5,0); 

}