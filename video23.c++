#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>

using namespace std;
// To print row wise sum
// Leet code and code studio question

// int LargestRowSum(int arr[][3],int row,int col){

//     int maxi = INT16_MIN;
//     int rowIndex=-1;

//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//         sum += arr[i][j];
//         }
//         if(sum > maxi){
//             maxi = sum;
//             rowIndex = row;
//         }
//     }
//     cout<<"The Maximum Sum is "<< maxi <<endl;
//     return rowIndex;

// }

// int LargestColSum(int arr[][3],int row,int col){

//     int maxi = INT16_MIN;
//     int colIndex=-1;

//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//         sum += arr[j][i];
//         }
//         if(sum > maxi){
//             maxi = sum;
//             colIndex = col;
//         }
//     }
//     cout<<"The Maximum Sum is "<< maxi <<endl;
//     return colIndex;

// }

// void printSumRow(int arr[3][3],int i,int j){
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//         sum += arr[i][j];
//         }
//         cout<<sum <<" ";
//     }
//     cout<<endl;
// }
// // To print sum col wise sum
// void printSumCol(int arr[3][3],int i,int j){
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//         sum += arr[j][i];
//         }
//         cout<<sum <<" ";
//     }
//     cout<<endl;
// }
// // bool isPresent(int arr[3][4], int target,int i,int j){
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<4;j++){
// //             if(target==arr[i][j])
// //             {
// //                 return 1;
// //             }            
// //         }
// //     }
// //     return 0;
// // }

// // Why we need use 2D array
// // It is appropriate to built 10-20 arrays but for 1000 array we need 2d array
// // [0][1][2][3][4][5][6][7][8][9]->3row*3col -> (c*i+j)total number of col c number of row number of col
// // implement of 2D is_array
// // int arr[a][b];
// // cin>>arr[a][b];
// // cout<<arr[a][b];
// // TO visualize as array


// int main(){
// // i=row j=col
// int arr[3][3];
// // {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
// cout<<"Enter the Element "<<endl;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[i][j];
//     }
// }


// // for(int i=0;i<4;i++){
// //     for(int j=0;j<3;j++){
// //         cin>>arr[j][i];
// //     }
// // }

// cout<<"Print Your 2d Array "<<endl;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<< " ";
//     }
//     cout<<endl;
// }
// cout<<"Sum of Row is "<<endl;
// printSumRow(arr,3,3);
// cout<<"Sum of Col is "<<endl;
// printSumCol(arr,3,3);
// cout<<"LargestRowSum is "<<endl;
// LargestRowSum(arr,3,3);
// cout<<"LargestColSum is "<<endl;
// LargestColSum(arr,3,3);

// cout<<"Enter the search element "<<endl;
// int target;
// cin>>target;
// if(isPresent(arr,target,3,4))
// {
//     cout<<"Element Found "<<endl;
// }
// else
// {
//     cout<<"Not Found "<<endl;
// }
// }
// Binary search in 2D matrix
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end =row*col-1;

//         int mid=start + (end-start)/2;

//         while(start <= end){
//             int element = matrix[mid/col][mid%col];

//             if(element == target){
//                 return 1;
//             }
//             if(element < target){
//                 start = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//             mid= start +(end - start)/2;
//         }
//     return 0;
//     }
// };