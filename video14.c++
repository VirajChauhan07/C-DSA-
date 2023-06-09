#include<stdio.h>
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;

// Find Pivot in a Array

// int FindPivot(int arr[],int n){

//     int start=0,end=n-1;
//     int mid=(start+end)/2;
//     while(start<end){
//     if(arr[mid]>=arr[0]){
//         start=mid+1;
//     }
//     else{
//         end=mid;
//     }
//     mid=(start+end)/2;
//     }
//     return start;
//     // we can return eitherend or start
// }


// int main(){

//     int arr[10]={5,8,9,1,3,4};

//     cout<<"Pivot is "<<FindPivot(arr,10)<<endl;
// }
// search the number in rotated sorted array
// int binarysearch(int arr[],int s,int e,int key){
//     int start=s;
//     int end=e;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return -1;
// }

// int findpivot(int arr[],int n){
//     int start=0,end=n-1;
//     int mid=(start+end)/2;
//     int pivot=0;
//     while(start<end){
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//             pivot=start;
//         }
//         else{
//             end=mid;
//             pivot=end;
//         }
//         mid=(start+end)/2;
//     }
//     return pivot;
// }

// int search(int* arr, int n, int key) {
//     // Write your code here.
//     int pivot=findpivot(arr,n);
//     if(key>=arr[pivot] && key<=arr[n-1]){
//         return binarysearch(arr,pivot,n-1,key);
//     }
//     else{
//         return binarysearch(arr,0,pivot-1,key);
//     }
// }
    // binaryserach square root
        int sqrtInteger(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }

    double moreprecison(int n,int precision,int tempsol){

        double factor = 1;
        double ans=tempsol;
        for(int i=0;i<precision;i++){
            factor=factor/10;
            for(double j=ans; j*j<n; j=j+factor){
                ans=j;
            }
        }
        return ans;
    }

    int main(){
        int n;
        cout<<"enter the Number "<<endl;
        cin>>n;

        int tempsol =sqrtInteger(n);
        cout<<"Answer is "<< moreprecison(n,3,tempsol)<<endl;
    }