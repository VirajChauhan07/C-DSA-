#include<iostream>

using namespace std;

void print(int *p){
    cout<< *p <<endl;
}
void update(int *p){
    // p = p + 1;
    // cout<< "inside "<<p<<endl;
    *p =*p+1;
}

int main(){

    // int arr[10]={2,5,6};
    // int arr[10]={23,122,41,67};

    // cout<< "Address of first array "<<arr<<endl;
    // cout<< " Value of First array " <<arr[0]<<endl;
    // cout<< "Address of first array "<<&arr[0]<<endl;

    // cout<< " 1st "<<*arr<<endl;
    // cout<< " 2nd "<<*arr + 1<<endl;
    // cout<< " 3rd "<<*(arr + 1)<<endl;
// * -> value at 
// & -> Address of 
// arr[i] -> *(arr + i) // i[arr] = *(i + arr) i is for index 
    // cout<<arr[2]<<endl;
    // cout<<*(arr + 2)<<endl;

    // int i=3;
    // cout<<i[arr]<<endl;

    // Differnce  pointer / array 
    //  i=In array size*4byte print
    // pointers 8 byte 

    // int temp[10];
    // cout<<sizeof(temp)<<endl;
    // // give size of block 
    // cout<<sizeof(*temp)<<endl;

    // cout<<sizeof(&temp)<<endl;

    // int *ptr =&temp[10];
    // cout<<sizeof(*ptr)<<endl;
    // // in pointer it give 8bytes
    // cout<<sizeof(&ptr)<<endl;

    // int a[20] = {1,2,3,4};
    // cout<<&a[0]<<endl;
    // cout<<a<<endl;
    // cout<<&a<<endl;

    // int *p = &a[10];
    // cout<< *p <<endl;
    // cout<< &*p <<endl;
    // cout<< p<<endl;

    // int arr[10];
    // // If pointer is incremented the block of array will increment not in address
    // int *ptr =&arr[10];
    // cout<< ptr<<endl;
    // ptr=ptr + 1;
    // cout<< ptr<<endl;



    // ***********______________*************

    // int arr[5]={1,2,3,4,5};
    // char ch[6]="abcde";

    // cout<< arr <<endl;
    // // differnce  in arr print address and in character print content
    // cout<< ch <<endl;

    // char *c =&ch[0];

    // cout<< c<< endl;

    // char temp ='z';
    // char *p =&temp;

    // cout<<  p << endl;


    // ***************

    int value =5;
    int *p =&value;
    // print(p);

    cout<<"Before "<< *p <<endl;

    update(p);

    cout<<"after "<< *p<<endl;

// getsum(arr + i ) which give part of the array 
// refer video 

    return 0;
}

