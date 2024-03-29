#include<stdio.h>
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;
// Binary Search -> Must Be in Form Of Monotonic Function either Increasing or Decreasing 
int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
    
    int mid=(start+end)/2;
    while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    if((arr[mid])>key)
    {        
        end=mid-1;
    }
    else
    {
        start=mid+1;
    }
    mid= (start+end)/2;
 
    }
    return -1;
}
// exception case if start+end is greater than the range of the integer wecan avoid it by using it (s + (e-s)/2)
// Run time Complexity (n/2^k)=(k=logn)
int main(){

    int arr[10]={2,5,7,10,13,16,18,22};


    int index = BinarySearch(arr,8,13);
    cout<<"Index of 13 is : "<<index<<endl;
}