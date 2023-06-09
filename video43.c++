#include<iostream>
#include<string.h>
using namespace std;



class B{
    
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+( B &obj){
        int value1= this->a;
        int value2=obj.a;
        cout<<"output is "<< value2-value1<<endl;
    }
};

int main(){
    B obj1 ,obj2;
    obj1.a=4;
    obj2.a=7;

    obj1+obj2;
}

/*class human{

    private:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    int   setWeight(int w){
        return this->weight=w;
    }
};

class male: public human{

    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping "<<endl;
    }

};

int main(){

    // Baseclass      |  inherited 
    // access modifier| access modifer
    // public         |  public -> public
    // public         |  private ->private
    // public         | Protected ->Protected

    // protected         |  public -> Protected
    // protected         |  private ->Protected
    // protected         | Protected ->Protected

    // private         |  public -> N.A
    // private         |  private ->N.A
    // private         | Protected ->N.A

    // male object1;
    // cout<<object1.getAge()<<endl;
    // // object1.setWeight(20);
    // cout<<object1.setWeight(20)<<endl;
    // cout<<object1.color<<endl;
    // object1.sleep();



}*/

























// Encapsulation
// class student{
    
//     private:
//         string name;
//         int age = 14;
//         int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };

// int main(){
//     student first;
//     cout<<"Every thing is fine "<<first.getAge()<<endl;

    
//     return 0;
// }