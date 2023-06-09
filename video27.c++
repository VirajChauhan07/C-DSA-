#include<stdio.h>
#include<iostream>

using namespace std;

// why does we use star rather than pointer word because 1.) it show which type of data type 2.) how much number of byte  consider 
// Double Pointer 
void update ( int **ptr2){

**ptr2 = **ptr2 + 1;
    
}

int main()
{
    // int i =5;
    // int* ptr = &i;
    // int** ptr2 = &ptr;

    // cout<< i <<endl;
    // cout<< *ptr <<endl;
    // cout<< **ptr2 <<endl;
    // // above all call the value 
    // update(ptr2);
    // cout<< i <<endl;
    // cout<< &i <<endl; 
    // // Address of the i
    // cout<<ptr<<endl;
    // // Store address of i
    // cout<< &ptr <<endl;
    // cout<< ptr2 <<endl;
    // cout<< &ptr2 <<endl;
    // cout<< **ptr <<endl;
    
}

// 1.) 8,9
// 2.) 7
// 3.) 9
// 4.) Segementation Fault 
// 5.) 11 , 13
// 6.)
 