// // 26/11/22
// // Patterns
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
//     Pattern:3
    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

// Pattern:4
// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// }

// Pattern:5
// int n;
// cin>>n;

// int i=1;
// int count=1;

//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

// Pattern:6
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }

//     Pattern:7
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }

//     Pattern:8
//     int n;
//     cin>>n;
//     int row=1;
//     int count=1;
//         while(row<=n){
//             int col=1;
//             while(col<=row){
//                 cout<<count;
//                 count=count+1;
//                 col=col+1;
//             }
//             cout<<endl;
//             row=row+1;
//         }

//     Pattern:9
//     int n;
//     cin>>n;

//     int row=1;
//     int value=row;
//     while(row<=n){
         
//         int col=1;
//         while(col<=row){
//             cout<<value;
//             value=value+1;
//             col=col+1;
//         }
//         cout<<endl;
       
//         row=row+1;
//     }
// }

// without int value 
// int n;
//     cin>>n;

//     int row=1;
//     int count=row;
//     while(row<=n){
        
//         int col=1;
//         while(col<=row){
//             cout<<row+col-1;
            
//             col=col+1;
           
//         }
//         cout<<endl;
       
//         row=row+1;
//     }


// Pattern:10
// int n;
// cin>>n;

// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=row){
//         cout<<row-col+1;        
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }
// Pattern:11
// int n;
// cin>>n;

// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=n){
//         char ch='A'+row -1;
//         cout<< ch;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }


// int n;
// cin>>n;

// int row=1;

// while(row<=n){
//     int col=1;
    
//     while(col<=n){
//         char ch='A'+ col-1;
//         cout<<ch;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }
// Pattern:13
// int n;
// cin>>n;

// int row=1;
// char start='A';
// while(row<=n){
//     int col=1;
    
//     while(col<=n){
        
//         cout<<start;
//         start=start+1;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// Pattern:14
// int n;
// cin>>n;

// int row=1;

// while(row<=n){
//     int col=1;
    
//     while(col<=n){
//        char ch='A'+row+col-2;
//         cout<<ch;
        
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// Pattern:15
// int n;
// cin>>n;

// int row=1;

// while(row<=n){
//     int col=1;
    
//     while(col<=row){
//         char ch='A'+row-1;
//         cout<<ch;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// Pattern:16
// int n;
// cin>>n;

// int row=1;
//  char ch='A';
// while(row<=n){
//     int col=1;
    
//     while(col<=row){
       
//         cout<<ch;
//         ch=ch+1;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// Pattern:17
// int n;
// cin>>n;

// int row=1;
 
// while(row<=n){
//     int col=1;
    
//     while(col<=row){
//        char ch='A'+row+col-2;
//         cout<<ch;
//         ch=ch+1;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// Pattern:18
// int n;
// cin>>n;

// int row=1;
 
// while(row<=n){
//     int col=1;
//      char ch='A'+n-row;
//     while(col<=row){
       
//         cout<<ch;
//         ch=ch+1;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// Pattern:19
// int n;
// cin>>n;

// int row=1;

// while(row<=n){

//     int space=n-row;
//     while(space){
//         cout<<" ";
//         space=space - 1;
//     }
//     int col=1;
//     while(col<=row){
//         cout<<"*";
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// Pattern:20
// int n;
// cin>>n;
// int row=1;
// char ch = '*';
// while(row<=n){
//     int col=1;
//     ch=n-row+1;
//     while(col<=n-row+1){
        
//         cout<<'*';
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;   
   
// }

// Pattern:21
// int n;
// cin>>n;

// int row=1;

// while(row<=n){

//     int space=1;
//     while(space<row){
//         cout<<" ";
//         space=space + 1;
//     }
//     int col=1;
//     while(col<=n-row+1){
//         cout<<"*";
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// Pattern:22
// int n;
// cin>>n;

// int row=1;

// while(row<=n){

//     // print space
//     int space =n-row;
//     while(space){
//         cout<<" ";
//         space=space-1;
//     }
//     // print 1st triangle 
//     int col=1;
//     while(col<=row){
//         cout<<col;
//         col=col+1;
//     }

//     // print 2nd triangle
//     int start =row-1;
//     while(start){
//         cout<<start;
//         start=start-1;
//     }
//     cout<<endl;
//     row=row+1;
// }

// // Pattern:22
// int n;
// cin>>n;

// int row=1;
// while(row<=n){
//     // print 1st triangle
//     int col=1;
    
//     while(col<=n-row+1){
//         cout<<col;
//         col=col+1;
//     }
//     // print 2nd triangle
//     int star=1;
//     while(col<=row+4){
//         cout<<"*";
//         col=col+1;
//     }
//     // print 3rd triangle
//     col=n-row+1;
//     while(col>=1){
//         cout<<col;
//         col=col-1;
//     }
//     cout<<endl;
//     row=row+1;
// }
}
