// // 29/11/22-30/11/22
// #include<stdio.h>
// #include<math.h>
// #include<iostream>
// using namespace std;
// // Switch case and Function 

//     int num=2;
//     switch(num){
//         use of continue is not valid
//         case 1: cout<<"First"<<endl;
//         break;//break is use to stop the execution of the loop;
//         case 2: cout<<"Second"<<endl;
//         break;
//         // deault case is not mandatory 
//         default: cout<<"It is default case "<<endl;
//     }
//     cout<<endl;
// Calculator
//      int a,b;
//      char operation;
//      cout<<"enter the value of a " <<endl;
//      cin>>a;
//      cout<<"Enter the value of b "<<endl;
//      cin>>b;
//      cout<<"Enter the operation want on perform "<<endl;
//      cin>>operation;

     
//      switch(operation){
//         case '+':cout<<(a+b)<<endl;
//                 break;
//         case '-':cout<<(a-b)<<endl;
//                 break;
//         case '*':cout<<(a*b)<<endl;
//                 break;
//         case '%':cout<<(a%b)<<endl;
//                 break;
//         case '/':cout<<(b/a)<<endl;
//                 break;
//             default:cout<<"Not Valid"<<endl;
//      }

//     Homework
//     int amount;
//     cout<<"Enter the amount :"<<endl;
//     cin>>amount;
//     int notes;
//     cin>>notes;
    
//     switch(notes){
//         case 100:cout<<"No of 100 notes :" <<(amount / 100)<<endl;
//                  amount=amount%100;
                
//         case 50:cout<<"No of 50 notes :" <<(amount / 50) <<endl;
//                 amount=amount%50;
                
//         case 10:cout<<"No of 20 notes :" <<(amount /20)<<endl;
//             amount=amount%20;
                
//         case 1:cout<<"No of 1 notes :" <<(amount /1)<<endl;
//             amount=amount%1;
                
//     }

//     Functions 
//     pow(a,b)
//     int a,b;
//     cin>>a>>b;

//     int ans=1;
//     for(int i=1; i<=b;i++){
//         ans =ans*a;
//     }
//     cout<<"answer is "<<ans<<endl;
// First method to call it 
//     int power(){
//         int a,b;
//         cin>>a>>b;
//         int ans=1;

//         for(int i=1; i<=b; i++){
//             ans=ans*a;
//         }
//         return ans;
//     }

//     int main(){
       
//         int ans=power();
//         cout<<"answer is "<<ans<<endl;
//         return 0;
//     }

// Even and Odd
// bool isEven(int a){
//     if(a&1){
//     if we aand any number with 1 and if it is odd it will give 1 in out put else it will give 0 to even output
//         return 0;
//     }
//     return 1;
// }
// int main(){
//     int num;
//     cin>>num;

//     if(isEven(num)){
//         cout<<"Number is even "<<endl;
//     }
//     else{
//         cout<<"NUmber is odd"<<endl;
//     }
// }
// int factorial(int n){
//     int fact =1;

//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;

// }
// int nCr(int n,int r){

//     int num = factorial(n);
//     int deno=factorial(r) * factorial(n-r);

//     return num/deno;
// }

// int main(){
// int n,r;
// cin>>n>>r;

// cout<<"Answer is "<< nCr(n,r) <<endl;
// }

// if there is not a return type we use void which is used for only print the output 
//  void printCounting( int n){
//     for(int i=1;  i<=n ;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//  }
//  int main(){
//     int n;
//     cin>>n;

//     printCounting (n);

//     return 0;
//  }

// bool isPrime(int n){

// for(int i=2; i<=n ;i++){
//     if(n%i == 0){
//         return 0;

//     }
// }
// return 1;
// }
// int main(){
//  int n;
//  cin>>n;
//  if(isPrime(n)){
//     cout<<"is a Prime No"<<endl;
//  }
//  else{
//     cout<<"is not a Prime No"<<endl;
//  }
// }

// Pass by value
// void dummy (int n){
//     n++;
//     cout<<"n is "<<n<<endl;
   
// }

// int main(){
//     int n;
//      cin>>n;

//      dummy(n);

//     cout<<"Number is "<<n<<endl;
//     return 0;
// }

// void update(int a){

// }
// int main(){
//     int a=10;
//     update(a);
//     cout<<a<<endl;
// }
// output :- 10

// int update(int a){
//     a-=5;
//     return a;
// }
// int main(){
//     int a=15;
//     update(a);
//     cout<<a<<endl;
// }
// output :-15













    
