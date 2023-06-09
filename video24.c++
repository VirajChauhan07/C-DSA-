#include<iostream>
#include<math.h>
#include<vector>
#include<stdio.h>

using namespace std;

// bool isPrime(int n){

//     if(n<=1)
//     return false;

//     for(int i=2; i <n; i++)
//     {
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){

//     cout<<"Enter the number ";
//     int n;
//     cin>>n;

//     if(isPrime(n)){
//         cout<<"It is a Prime number"<<endl;
//     }
//     else{
//         cout<<"It is not a prime number"<<endl;
//     }

// }

// Sieve of Eratosthenes
// jo number ke table meata ho use non prime kar do 

// Segemented sieve is another method of to find the prime number 

// gcd(a,b) = gcd(a-b,b) or gcd(a%b,b)

// int gcd(int a,int b){
//     if(a==0)
//     return b;

//     if(b==0)
//     return a;

//     while(a!=b){
//         if(a>b)
//         {
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//     }
//     return a;
// }

// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b "<<endl;
//     cin>>a>>b;

//     int ans = gcd(a,b);

//     cout<<"The GCD of "<< a << " & " << b << " is "<< ans <<endl;
//     return 0;
// }

// ****** lcm(a,b) * gcd(a,b) = a*b . 

// Fast Exponentioation
// Pigeon hole principle
// Catelon Number
// Inclusion exclusion principle
// Factoril of no 212! % m ----------- m=10^9 + 7

