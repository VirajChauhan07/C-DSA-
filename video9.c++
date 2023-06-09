// 1/12/22 ---- 2/12/22
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

// Array - list which save same datatype:
//        contagious memory location
// why we use array : to store multipe value in single variable 

int main(){
    int arr[1000]={1};
    cout<<arr[10]<<endl;
}
output :- 0
 
 int main(){
    int number[15];

    cout<<"Value of 1st index "<<number[1]<<endl;

    cout<< endl <<"Everything is Fine "<<endl;

    return 0;
 }

the size of index is 0 to (n-1)
Initializaton of Array 
int second[15]={5,7,11};

int main(){
    int n=15;
cout<<"Printing the Array"<<endl;

for(int i=0;i<=n;i++){

    cout<<second[i]<<" ";

}
}

int fourth[10]={0};
int main(){
int n=10;
cout<<"Printing the Array"<<endl;
for(int i=0;i<n;i++){
    cout<< fourth[i]<<" ";
}

cout<<endl<<"Everything is fine "<<endl;
}

void printArray(int arr[], int size)
{
    cout<<"Printing The Array"<<endl;

    for(int i=0;i<size;i++){
        cout<< arr[i] <<" ";

    }
    cout<<"printing DONE "<<endl;
}

int main(){

    int first[15]={10,20,30,40,50};
    int n=15;
    printArray(first, 10);

    int fifth[10]={1};
    n=10;
    printArray(fifth,10);

    int fifthsize =sizeof(fifth)/sizeof(int);
    cout<<"Size of Fifth is "<<fifthsize<<endl;

    char ch[5]={'a','b','c','d','e'};
    int n=10;
    cout<<endl <<"Everything is Fine "<<endl;
    // cout<<ch[3]<<endl;

    cout<<"Printing the Array"<<endl;

    for(int i=0;i<=5;i++){
        cout<< ch[i] <<" ";
    }
    cout<<" Printing DONE "<<endl;

}
int getMax(int num[],int n){
    // int max= INT32_MIN;
int maxi =INT_FAST32_MIN;
    for(int i=0;i<n;i++){
    //     if(num[i]>max){
    //         max=num[i];
    //     }
        maxi=max(maxi,num[i]);
    }
    return maxi;
}
int n is a size of the array which is used to given in pararmeter of the function because we can estimate the size of complete array occupy by the size not the given calue only
int getMin(int num[],int n){
    // int min= INT_FAST8_MAX;
int mini=INT_FAST32_MAX;
    for(int i=0;i<n;i++){
        // if(num[i]<min){
        //     min=num[i];
        // }
        mini=min(mini,num[i]);
    }
    return mini;
}
int main(){
    int size;
    cin>>size;

    int num[10];
// Taking input;
    for(int i=0;i<=size;i++){
        cin>>num[i];
    }
    cout<<"Maximum value is "<<getMax(num,size)<<endl;
    cout<<"Minimum value is "<<getMin(num,size)<<endl;
    return 0;
}
****scope of variable
void update(int arr[],int n){

cout<<"Inside the function"<<endl;
arr[0]=120;
for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
cout<<"Going Back to the main Function"<<endl;

}
// function variable changes also affect the main function variable because it give address of the array to the function hence any update done on function will also affect the main function  
int main(){

    int arr[3]={1,2,3};

    update(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

*****Homework

int SumOfArray(int arr[],int n){
   
    int ans=0;
   
    for(int i=0;i<=n;i++){
        ans=ans+arr[i];        
    }
    return ans;

}
int main(){
   
    int n;
    cin>>n;
    
    int arr[5];
     for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    //  n=sizeof(arr)/sizeof(int);
    SumOfArray(arr,n);
    

    cout<<"Sum of Array is "<<SumOfArray(arr, n)<<endl;

    return 0;

}
*****Linear Search 

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
        
    }
    return 0;
    

}
int main(){
    int arr[10]={1,5,8,11,13,6,7,-5,4,14};
    int key;
    cin>>key;

    bool found=search(arr,10,key);

    if(found){
        cout<<"Key is Present "<<endl;
    }
    else{
        cout<<"Key is Not present "<<endl;
    }

}
// Reverse an Array

void ReverseArray(int arr[],int size){
    int temp=0;
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

int a[5]={10,20,30,40,50};
int b[6]={1,2,3,4,5,6};


ReverseArray(a,5);
ReverseArray(b,6);

printArray(a,5);
printArray(b,6);




}
