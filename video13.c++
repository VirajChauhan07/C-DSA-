#include<stdio.h>
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;



// int LeftOccurence(int arr[],int n,int key){
//     int start=0,end=n-1;
//     int mid=(start+end)/2;
//     int ans=0;
//     while(start<=end){
//     if(key==arr[mid]){
//         ans=mid;
//         end=mid-1;
//     }
//     else if(key<arr[mid]){
//         end=mid-1;
//     }
//     else if(arr[mid]<key){
//         start=mid+1;
//     }
//     mid=(start+end)/2;
//     }
//     return ans;
// }
// int RightOccurence(int arr[],int n,int key){
//     int start=0,end=n-1;
//     int mid=(start+end)/2;
//     int ans=-1;
//     while(start<=end){
//     if(key==arr[mid]){
//         ans=mid;
//         start=mid+1;
//     }
//     else if(key>arr[mid]){
//         start=mid+1;
//     }
//     else if(key<arr[mid]){
//         end=mid-1;
//     }
//     mid=(start+end)/2;
//     }
//     return ans;
// }

// int main(){

//     int arr[10]={0,0,1,1,2,2,2,2,2,2};
   
//     cout<<"First Occurence :" <<LeftOccurence(arr,10,2)<<endl;
//      cout<<"Last Occurence :"<<RightOccurence(arr,10,2)<<endl;

// }


// int LeftOccurence(int arr[],int n,int key){
//     int start=0,end=n-1;
//     int mid=(start+end)/2;
//     int ans=0;
//     while(start<=end){
//     if(key==arr[mid]){
//         ans=mid;
//         end=mid-1;
//     }
//     else if(key<arr[mid]){
//         end=mid-1;
//     }
//     else if(arr[mid]<key){
//         start=mid+1;
//     }
//     mid=(start+end)/2;
//     }
//     return ans;
// }
// int RightOccurence(int arr[],int n,int key){
//     int start=0,end=n-1;
//     int mid=(start+end)/2;
//     int ans=-1;
//     while(start<=end){
//     if(key==arr[mid]){
//         ans=mid;
//         start=mid+1;
//     }
//     else if(key>arr[mid]){
//         start=mid+1;
//     }
//     else if(key<arr[mid]){
//         end=mid-1;
//     }
//     mid=(start+end)/2;
//     }
//     return ans;
// }
// int TotalNumberOfOccurence(int arr[],int n,int key){

//     int ans=0;
//     ans=(RightOccurence(arr,n,key)-LeftOccurence(arr,n,key))+1;

//     return ans;
// }

// int main(){

//     int arr[10]={0,0,1,1,2,2,2,2,2,2};
   
//     // cout<<"First Occurence :" <<LeftOccurence(arr,10,2)<<endl;
//     //  cout<<"Last Occurence :"<<RightOccurence(arr,10,2)<<endl;
//     cout<<"The Total Number of Occurence -> "<<TotalNumberOfOccurence(arr,10,2)<<endl;

// }

// peak in Montain array
int FindPeak(int arr[],int n){

    int start=0,end=n-1;
    int mid=(start+end)/2;
    int ans=0;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
   mid=(start+end)/2;
    }
    return arr[start];
}

int main(){
    int arr[10]={2,4,8,3};

    cout<<"The Peak of Mountain is "<<FindPeak(arr,10)<<endl;
}