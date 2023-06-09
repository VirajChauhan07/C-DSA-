#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

// int sizeOfArray(char name[]){
// int count =0;
// for(int i=0;name[i]!='\0';i++){
//     count++;
// }
// return count++;
// }

// void reverse(char name[],int n){
//     int s=0;
//     int e=n-1;

//     while(s<e){
//         swap(name[s++],name[e--]);
//     }
// }

// bool checkPalindrome(char name[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         if(name[s]!=name[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// char toLowerCase(char ch){
//     if(ch>='a' && ch<='z'){
//         return ch;
//     }
//     else{
//         char temp = ch-'A'+'a';
//     }
// }

// int main(){
//     // Strings -> 1 dimesional character array
//     // How to take input in character array
   
//     char name[20];
//     cout<<"Enter Your Name : ";
//     cin>>name;
 
//     // name[2]='\0';
//     // Null -> '\0' Ascii value is use for terminator where  the string end [V,I,R,A,J,\0,\0,\0]
//     cout<<"Your Name is : ";
//     cout<<name<<endl;
//     int len=sizeOfArray(name);
//     cout<<"Length : "<<len<<endl;
//     // cout<<sizeOfArray(name);
//     reverse(name,len);
//     cout<<name<<endl;
//     cout<<checkPalindrome(name,len);
    
//     cout<<" Charachter is "<< toLowerCase('b')<<endl;
//     cout<<" Charachter is "<< toLowerCase('C')<<endl;
    
   
// //  Check if string is palindrome
// // #include <bits/stdc++.h> 
// // bool checkPalindrome(string s)
// // {
// // //     Write your code here.
// //     int start=0;
// //     int end=s.length()-1;
// //     for(int i=0; i<=end;i++){
// //         s[i]=tolower(s[i]);
// //     }
// //     while(start<=end){        
// //             if(!(s[start]>='a' && s[start]<='z')){
// //                 start++;
// //             }
// //             else if(!(s[end]>='a' && s[end]<='z')){
// //                 end--;
// //              }
// //             else if(s[start]==s[end]){
// //                start++;
// //                 end--;
// //             }                
// //             else{
// //                 return false;
// //         }   
// //     }    
// //     return true;
// }
// //how many number of occurence
//   to find the number of maximum Occurence 
// char getMaxOccAnswer(string s){

//     int arr[26]={0};

//     for(int i=0; i<s.length();i++){
//         char ch=s[1];

//         int number =0;
//         number =ch - 'a';
//         arr[number]++;//every number is zero and at every case it will increment the given character in the string 
//         //character with highest Count 
//     }

//     int maxi=-1,ans=0;
//     for(int i=0;i<26;i++){
//         if(maxi < arr[i]){
//             ans=i;
//             maxi=arr[i];
//         }
//     }
//     char finalAns = 'a'+ans;
//     return finalAns;
// }

// int main(){
//     string s;
//     cin>>s;
//     cout<<getMaxOccAnswer(s)<<endl;
// }

// cin.geline which take full line as input
// custom delimeter search on google 
// Inbuilt Function of char 
// string str;
// length -> int len =strlen(name);
// Compare -> strcmp(s1,s2) ->!=0==Notequal ->==0==equal length;
// COpy - >strcpy(data,source);

char space(string str){
    string temp="";

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
}
    }
}