#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

// First question
int AP(int n){

   int ans= 3*n+7;

   return ans;

}
int main(){
    int n;
    cin>>n;
    
    cout<<AP(n);
}

int TotalSetBits(int a,int b){

    int count1 = 0;
    int count2 = 0;
    while(a){
        count1 += a&1;
        a>>=1;
    }
     
    while(b){
        count2 += b&1;
        b>>=1;
    }
    return count1+count2;
      

}
int main(){
    int a,b;
    cin>>a>>b;

    cout<<TotalSetBits(a,b);
}

int fibonacci(int n){

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<n;i++){
        int sum =a+b;
        // cout<<sum<<" ";
        a=b;
        b=sum;
    }
     

}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
}