// Inheritance & Its Different Types with Examples in C++
// it is very simple like as java 
//function difining is only the different way in c++ inheritance

// #include<iostream>
// using namespace std;
// class Arman{
//     public:
//     int id;
//     float salary;
//     Arman(){}
//     Arman(int name){
//         id = name;
//         salary = 34.6;
//         cout<<"this is the base class :";
//     }
// };

// // Derived Class syntax
// /*
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }
// Note:
// 1. Default visibility mode is private
// 2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// 3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
// 4. Private members are never inherited
// */

// // Creating a Programmer class derived from Employee Base class

// class what :public Arman{
//     public:
//     int code;
//     what(int what){
//         id = what;
//         code = 9986;
//     }
//     void printw(){
//         cout<<id<<endl;
//     }

// };
// int main(){
//     Arman a1(4);
//     cout<<a1.salary<<endl;
//     cout<<a1.id<<endl;
//     what w1(45);
//     cout<<w1.code<<endl;
//     cout<<w1.id<<endl;
//     w1.printw();
//     return 0;
// }

// Single Inheritance 

// #include<iostream>
// using namespace std;
// class base{
//     int data1;
//     public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };
// void base :: setdata(){//its nothing just defining the functions
//     data1 = 40;
//     data2 = 30;
// }
// int base :: getdata1(){//its nothing just defining the functions
//     return data1;
// }
// int base :: getdata2(){//its nothing just defining the functions
//     return data2;
// }
// class derived : public base{
//     int data3;
//     public:
//     void process();
//     void display();
// };
// void derived :: process(){//its nothing just defining the functions
//     setdata();
//     data3 = data2 * getdata1();
// }
// void derived :: display(){//its nothing just defining the functions
//     cout<<"The value of data 1 is "<<getdata1()<<endl;
//     cout<<"The value of data 2 is "<<data2<<endl;
//     cout<<"The value of data 3 is "<<data3<<endl;
// }
// int main(){
//     derived dr;
//     dr.process();
//     dr.display();
//     return 0;
// }

// Protected Access Modifier in C++

#include<iostream>
using namespace std;
class base{
    protected:
    int a; 
    public:
    int b;
};
/*
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/
class derived : protected base{

};
int main(){

    return 0;
}

 

