#include<stdio.h>
#include<iostream>

using namespace std;

// bool isSorted(int arr[],int size){

//     if(size==0 || size==1 ){
//         return true;
//     }

//     if(arr[0]>arr[1])
//         return false;
//     else
//         {
//             bool ans =isSorted( arr + 1 ,size - 1);
//             return ans;
//         }
// }

// int main(){

//     int arr[5]={2,4,6,8,9};
//     int size=5;

//     bool ans = isSorted(arr , size);

//     if(ans){
//         cout<<"array is sorted "<<endl;
//     }
//     else{
//         cout<<"array is not sorted "<<endl;
//     }

//     return 0;
// }
// int SumOfArray(int arr[],int size ){

//     if(size==0){
//         return 0;
//     }
//     return (SumOfArray(arr,size-1) + arr[size-1]);
// }

// int main(){

//     int arr[6]={1,3,5,7,9,11};
//     int size = 6;

//     cout<<SumOfArray(arr,size)<<endl;

//     return 0;
// }

// Recursion in linear search 

// void print(int arr[],int n){
//     cout<<"Size of Array is "<< n <<endl;

//     for(int i =0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// bool LinearSearch(int arr[],int size,int key){
//     print(arr,size);
//     if(size==0){
//         return false;
//     }

//     if(arr[0]==key){
//         return true;
//     }
//     else{
//         bool remainingPart=LinearSearch(arr+1,size-1,key);
//         return remainingPart;
//     }

// }

// int main(){
//     int n = 5;
//     int arr[5]={3,5,1,2,6};
//     int size=5;
//     int key=1;
//     bool ans = LinearSearch(arr,size,key);

//     if(ans){
//         cout<<"Present"<<endl;
//     }
//     else{
//         cout<<"absent"<<endl;
//     }

//     print(arr,n);
//     return 0;
// }

// Binary Search 
int BinarySearch(int *arr,int s,int e,int key){

    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;

    if(arr[mid]==key)
    return true;
    if(arr[mid]<key){
        return BinarySearch(arr,mid+1,e,key);
    }
    else{
        return BinarySearch(arr,s,mid-1,key);
    }
}

int main(){

    int arr[6]={1,2,4,5,7,9};
    int size=6;
    int key=5;

    cout<<"Present or not "<<BinarySearch(arr,0,5,key);

    return 0;
}