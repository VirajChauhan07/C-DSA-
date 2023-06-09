#include<iostream>
#include<math.h>
#include<vector>
#include<stdio.h>

using namespace std;
// Pointers
// In Memory the address is present at every data 
// then Why we give the name to the data 
// Because the name of the data is mapped to the address of the data 

int main(){

// int num =5;
// int d2 =20;

// cout<<num<<endl;

// address of operator 
// cout<< " Address of Num is "<< &num <<endl;
// &num -> is the address of the num
// Address is in Hexa Decimal Format 

// Pointer : It store the address 
//  "*name of pointer " -> it is syntax of creating the Pointer 
// Data type of Pointer must be same as given address data type;
// int *p = &num;
// cout<< *p <<endl;
// It is also called as dereference operator 
// cout<< p <<endl;
// In the case of function call by value use the copy of the data 
// But in pointer if modify the value of the pointer the real data will also be Modified
// int *ptr =&d2;
// cout<< "Size of Integer is "<< sizeof(num)<<endl;
// cout<< "Size of Pointer is "<< sizeof(p)<<endl;
// cout<< "Size of Pointer is "<< sizeof(ptr)<<endl;

// int *p = 0;
// cout<< *p <<endl;

// int i=5;

// int *p = 0;
// p=&i;
// cout<< p<<endl;
// cout<< *p <<endl;

// int num =5;
// int a =num;
// a++;
// cout<<a<<endl;;
// cout<<num<<endl;

// int *p = &num;
// cout<< "Before " <<num <<endl;
// (*p)++;
// cout<<"After "<<num <<endl;

// // Copying Pointer

// int *q=p;
// cout<<p<< " - "<< q <<endl;
// cout<<*p<< " - "<<*q <<endl;

int i =3;
int *t =&i;
// cout<< (*t)++ <<endl;
*t = *t + 1;
// Value at address Stored in t 
cout<< *t <<endl;
return 0;

}