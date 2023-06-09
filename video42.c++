#include <stdio.h>
#include<string.h>
// #include"Hero.c++"
#include <iostream>

using namespace std;
// Creation of class
class Hero
{
    // Access modifer: public, private ,protected
private:
    int health = 80;

public:
    char level;
    char *Name;
    static int timetocomplete;
    Hero()
    {
        cout << "Constructor called " << endl;
        Name=new char[100];
    }

    Hero(int health) {
        cout<<"this is "<<this<<endl;
        this->health=health;
    }

    Hero(int health,char level) {
        cout<<"this is "<<this<<endl;
        this->level=level;
        this->health=health;
    }

    void print(){
        cout<<endl;
        cout<<"Name : "<<this->Name<<" , ";
        cout<<"Level : "<<this->level<<" , ";
        cout<<"Health : "<<this->health<<endl;
    }


    int getHealth()
    {
        return health;
    }

    int getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(int l)
    {
        level = l;
    }

    void setName(char Name[]){
        strcpy(this->Name, Name);
    }
};
int Hero::timetocomplete=5;
int main()
{
    cout<<Hero::timetocomplete<<endl;


    // Hero hero1;
    // hero1.sethealth(50);
    // hero1.setlevel('B');
    // char Name[7]="Viraj";
    // hero1.setName(Name);

    // hero1.print();

    // Hero hero2(hero1);
    // hero2.print();

    // hero1.Name[0]='B';
    // hero1.print();

    // hero2.print();

    // Object creation
    // Hero ramesh(20);
    // cout<<"Address of ramesh is "<<&ramesh<<endl;
    
    // cout<<"Size of "<< sizeof(h1)<<endl;
    // ramesh.health=70;
    // Object created statically
    // Hero a;
    // a.sethealth(80);
    // a.setlevel('D');
    // cout << "health is " << a.getHealth() << endl;
    // cout << "levle is " << a.level << endl;
    // // Object created Dynamically
    // Hero *h = new Hero;
    // h->print();

    // Hero temp(22,'B');
    // temp.print();
    // Use of Setter and Getter
    // cout << "health is " << (*b).getHealth() << endl;
    // cout << "level is " << (*b).level << endl;

    // cout << "health is " << b->getHealth() << endl;
    // cout << "level is " << b->level << endl;

    // cout << "Ramesh health is" << ramesh.getHealth() << endl;
    // ramesh.level = 'A';
    // ramesh.sethealth(50);
    // cout << "Health is " << ramesh.getHealth() << endl;
    // cout << "level is " << ramesh.level << endl;
}