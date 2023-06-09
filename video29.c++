#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    // Dynamic memory Allocation
    int row;
    cin>>row;

    int col;
    cin>>col;
// Creation of 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++)
    {
        arr[i]= new int[col];
    }
// Creating input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>> arr[i][j];
        }
    }
// Creating output 
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<< arr[i][j] <<" ";
        }cout<<endl;
    }
// Releasing Memory
    for(int i =0; i<row; i++){
        delete[] arr[i];
    }

    return 0;
}

// H/W Faggered array