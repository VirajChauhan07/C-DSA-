#include<stdio.h>
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;

// int swapAlter(int arr[],int size){
// for(int i=0;i<size;i+=2){
//     if(i+1 <size){
//     swap(arr[i],arr[i+1]); 
//     }   
// }
// }

// void printArray(int arr[],int size){

//     for(int i=0;i<size;i++){
    
//         cout<<arr[i]<<" ";
        
//     }
//     cout<<endl;
// }

// int main(){

// int arr[6]={1,2,3,4,5,6};
// int brr[5]={1,2,3,4,5};

// swapAlter(arr,6);
// printArray(arr,6);

// swapAlter(brr,5);
// printArray(brr,5);

// }
// calories in Paratha =126;*3=478 252
// calories in Chapati =70;*8=560
// Tuvar Dal Bowl =143;*2=286
// one bowl Rice =130;


// leet code questions Problem solving 

// int FindUnique(int arr[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         //  Use of Xor Function to get the unique element 
//         // 0^0= 0 // a^a=0 // 0^a=a 
//        ans=ans^arr[i];

//     }
//     return ans;

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[10];
//     for(int i=0;i<=n;i++){
//         cin>>arr[i];
//     }
//     FindUnique(arr,7);
//     cout<<"Unique Number is "<<FindUnique(arr,7)<<endl;

// }
// try by yourself too;
// vector<int> ans;
//         int size = arr.size();
//         int i = 0;
//         sort(arr.begin(),arr.end());
//         while(i<size){
//             int count = 1;
//             for(int j =i+1;j<size;j++){
//                 if(arr[i]==arr[j]){
//                     count++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             ans.push_back(count);
//             i = i+count;
//         }
//         size = ans.size();
//         sort(ans.begin(),ans.end());
//         for(int i = 0;i<size-1;i++){
//             if(ans[i]==ans[i+1]){
//                 return false;
//             }
//         }
//         return true;   
//     }
// };
// find Duplicate number 
// int FindDuplicate(int arr[],int n){
//     int ans=0;
    
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i+1]){
//             ans=arr[i];
//         }
//     }
//     return ans;
// }

// int main(){
    
//     int n;
//     cin>>n;
//     int arr[10];
//     for(int i=0;i<n-1;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     FindDuplicate(arr,n);

//     cout<<"The Duplicate Number is "<<FindDuplicate(arr,n)<<endl;
// }

// Anotherway to find Duplicate using Xor
// In this method we try to xor all the number first and duplicate number is xor which give itself as a output ;
// int FindDuplicate(int arr[],int size){

// int ans=0;
// for(int i=0;i<size;i++){
//     ans=ans^arr[i];
// }
// for(int i=1;i<size;i++){
//     ans=ans^i;
// }
// return ans;
// } 
// int main(){
    
//     int n;
//     cin>>n;
//     int arr[10];
//     for(int i=0;i<n-1;i++){
//         cin>>arr[i];
//     }
//     // sort(arr,arr+n);
//     FindDuplicate(arr,n);

//     cout<<"The Duplicate Number is "<<FindDuplicate(arr,n)<<endl;
// }

// find Duplicate number 
// int FindDuplicate(int arr[],int n){
   
//     int i=0,j=i+1;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<"["<<arr[j]<<","<<"]";
//             }
            
//         }
//     }
 
// }

// int main(){
    
//     int n;
//     cin>>n;
//     int arr[10];
//     for(int i=0;i<n-1;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     // for(int i=0;i<n;i++){
//     //     if(i<=n)
//     // FindDuplicate(arr,n);
     
//     // cout<<"The Duplicate Number is "<<"["<< FindDuplicate(arr,n)<<"]"<<endl;
//     // }
//     FindDuplicate(arr,n);
// }

// Find Intersection 
// find the common term between them verify both the array and compare ;
// int intersection(int arr1[],int arr2[],int n,int m){

//     int ans=0;
//     for(int i=0;i<n;i++){
//         int element = arr1[i];
//         for(int j=0;j<m;j++){
//             if(element==arr2[j]){
//                 arr2[j]=8585;
//                 cout<<element<<" ";
//             }
//         }
//     }
 
    
// }

// int main(){
//     int n;
//     cout<<"Enter the size of N :";
//     cin>>n;
//     int m;
//     cout<<"Enter the size of M :";
//     cin>>m;
//     int arr1[10];
//     int arr2[10];
//     cout<<"ARRAY 1 :";
//     for(int i=0;i<n;i++){
        
//         cin>>arr1[i];
//     }
//     cout<<"ARRAY 2 :";
//     for(int i=0;i<m;i++){
        
//         cin>>arr2[i];
//     }
//     sort(arr1,arr1+n);
//     sort(arr2,arr2+m);
//     cout<<"The Intersection is ";
//     intersection(arr1,arr2,n,m);
//     // cout<<"The Intersection is "<<intersection(arr1,arr2,n,m)<<endl;
// }

// int PairSum(int arr[],int n){
//     int ans=0;
//     int Sum;
//     cout<<"Enter the value of Sum :" ;
//     cin>>Sum;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==Sum){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of N :";
//     cin>>n;
//     int arr[10];
//     cout<<"ARRAY 1 :";
//     for(int i=0;i<n;i++){
        
//         cin>>arr[i];
//     }

//     // int Sum;
//     PairSum(arr,n);
    
// }

// int TripletSum(int arr[],int n){
//     int ans=0;
//     int Sum;
//     cout<<"Enter the value of Sum :" ;
//     cin>>Sum;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//             if((arr[i]+arr[j]+arr[k])==Sum){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//             }
//             else{
//                 break;
//             }
//             }
//         }
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of N :";
//     cin>>n;
//     int arr[10];
//     cout<<"ARRAY 1 :";
//     for(int i=0;i<n;i++){
        
//         cin>>arr[i];
//     }

//     // int Sum;
//     TripletSum(arr,n);
    
// }
// int printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void SortNum(int arr[],int n){

// int left=0 , right=n-1;

// int step =0;

// while(left<right){
//     cout<<"Step "<<step++<<endl;
//     printArray(arr,n);
//     cout<<endl;
//     while(arr[left] == 0){
//         left++;
//     }

//     while(arr[right]==1){
//         right--;
//     }
//     if(left<right){
//     swap(arr[left],arr[right]);
//     left++;
//     right--;
//     }
// }
// cout<<"Returning the sorted array"<<endl;
// printArray(arr,n);

// }


// int main(){
//     int n;
//     cin>>n;

//     int arr[10];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// SortNum(arr,n);
// cout<<endl<<"Printing after function call "<<endl;
// printArray(arr,n);
// }
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int tripletOrder(int arr[],int n){

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]!=0 ){
            swap(arr[i],arr[j]);
        }
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
}


}
int main()
{
    int arr[10]={2,1,0,1,2,0,1,0,1};

    tripletOrder(arr,9);
    cout<<endl<<"Terminated Array is "<<endl;
    printArray(arr,9);
}
