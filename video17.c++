#include<stdio.h>
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n-1;i++){
        //for round 1 to n-1
        for(int j=i+1;j<n;j++){
            //process element till n-i index
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
