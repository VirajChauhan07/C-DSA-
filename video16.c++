#include<stdio.h>
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Selection Sort 

// void selectionSort(int arr[],int n){

//      for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }            
//         }
//         swap(arr[minIndex],arr[i]);
//     }
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     int arr[10]={6,8,4,2,10};
//     selectionSort(arr,5);
//     printArray(arr,5);
//     }

// Space Complexity : Constant 
// Time Complexity : O(n^2)
// Best Case : O(n^2);
// Worst Case :O(n^2);
// Use Case : when the size of array is small we can use this sorting method ;

