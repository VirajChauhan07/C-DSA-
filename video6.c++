#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main(){
// decimal to binary
    int n;
    cin>>n;
    int i=0,answer=0;
    while(n!=0){
        int bit=n&1;
        answer=(bit * pow(10,i) )+answer;
        n=n>>1;
        i++;
    }
    cout<<"answer is "<<answer<<endl;



int n;
cin>>n;
int i=0,answer=0;

while(n!=0){
    int digit=n%10;
    if(digit==1){
        answer=answer+pow(2,i);
    }
    n=n/10;
    i++;
}
cout<<answer<<endl;

}