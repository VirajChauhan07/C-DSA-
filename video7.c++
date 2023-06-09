// 29/11/22 Practise in leet code 
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main(){
// Power of 2
    class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for (int i=0; i<=30;i++){
            int ans =pow(2,i);
            
            if(ans == n){
                return true;
            }            
        }
        return false;
    }
};

}