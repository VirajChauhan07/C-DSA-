#include<stdio.h>
#include<iostream>
// Recurrsion day-4
using namespace std;

// ***Reverse the string

// void reverse(string& s,int a , int b ){

//     // Base class
//     if(a>b)
//     return;

//     swap(s[a],s[b]);
//     a++;
//     b--;
        
//     reverse(s,a,b);
    
// }

// int main(){

//     string name = "viraj";
//     cout<<endl;
//     reverse(name,0,name.length()-1);
//     cout<<endl;
//     cout<<name<<endl;


//     return 0;
// }

// ***Check Palindrome
// int checkPalindrome(string& s,int i,int j){
//     // Base case 
//     if(i>j)
//     return true;

//     if(s[i]!=s[j])
//     return false;
//     else{
//         return checkPalindrome(s,i+1,j-1);
//     }
// }

// int main(){

//     string text = "abbabbac";
//     cout<<endl;
//     bool isPalindrome=checkPalindrome(text,0,text.length()-1);
//     if(isPalindrome){
//         cout<<"It is a Palindrome "<<endl;
//     }
//     else{
//         cout<<"It is not a Palindrome "<<endl;
//     }

//     return 0;
// }

// ***Power 
// int power(int a,int b){
//     if(b==0)
//     return 1;
//     if(b==1)
//     return a;
//     int ans = power(a,b/2);

//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return a* ans *ans;
//     }
// }

// int main(){

// int a,b;
// cin>>a>>b;

// int ans = power(a,b);
// cout<<"Answer is a "<<ans<<endl;
//     return 0;
// }

// ***Bubble Sort
// void sortArray(int *arr,int n){
//     if(n==0||n==1){
//         return ;
//     }

//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }

//     sortArray(arr,n-1);
// }
// int main(){

//     int arr[6]={5,6,7,2,1,3};
//     sortArray(arr,6);

//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// HomeWork 
// Selection Sort & Insertion Sort perform recursion*****

// void insertionSort(int *arr,int n){

//     // Base class
//     if(n==0 || n==1){
//         return;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//         swap(arr[i],arr[i+1]);
//         }
//     }

//     insertionSort(arr,n-1);
    
// }

// int main(){

//     int arr[6]={8,5,6,1,3,4};
//     insertionSort(arr,6);
//     for(int i=0; i<6;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }

// int minIndex(int *arr,int i,int j){
//     if(i==j){
//         return i;
//     }

//     int k = minIndex(arr,i+1,j);
//     return (arr[i] < arr[k])? i:k;
// }
// void selectionSort(int *arr,int n,int index =0){

//     // Base class
//     if(index == n){
//         return;
//     }
    
//     int k = minIndex(arr,index,n-1);

//     if(k != index){
//         swap(arr[k],arr[index]);
//     }

//     selectionSort(arr,n,index+1);
    
// }

// int main(){

//     int arr[6]={8,5,6,1,3,4};
//     selectionSort(arr,6);
//     for(int i=0; i<6;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }