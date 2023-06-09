#include<stdio.h>
#include<iostream>

using namespace std;

// int factorial(int n ){
//     if(n==0){
//         return 1;
//     }

//     // int smallProblem = factorial(n-1);
//     // int bigProblem = n*smallProblem;

//     return n*factorial(n-1);

// }

// int main(){

// // Recursion --> function call itself directly or indirectly
// // Recursive Relation is used to call recursion
// // Best Example is Factorial of a Number 
// // F(n)=n * F(n-1)! in recursion we have base case or condition in which we have to stop 
// // In this Base case and recursive case is mandatory 
// // If base case is not given it will give segmantaion fault
// int n;
// cin>>n;

// int ans = factorial(n);

// cout<<ans<<endl;

//     return 0;
// }

// int power(int n){
//     if(n==0){
//         return 1;
//     }

//     // int smallProblem= power(n-1);
//     // int bigProblem=2 * smallProblem;

//     return 2*power(n-1);
// }

// int main(){

// int n;
// cin>>n;

// int ans= power(n);
// cout<<ans<<endl;

//     return 0;
// }
void print(int n ){
    if(n==0){
        return ;
    }

    cout<<n<<endl;
    print(n-1);
}

int main(){

    int n;
    cin>>n;
    cout<<endl;
print(n);

    return 0;
}