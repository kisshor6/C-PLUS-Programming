// Constructors In C++

//  #include<iostream>
// using namespace std;
// class name{
//     int a;
//     int b;
//     public:
//     name();
//     void print_number(){
//         cout<<"The number are "<<a<<" and "<<b<<endl;
//     }
// };
// name :: name(){//--> this is a default constructor
//     a = 34;
//     b = 56;
//     cout<<"WE are using the simple constructor without parameter"<<endl;
// }
// int main(){
//     name n;
//     n.print_number();
//     return 0;
// }

// parametrize constructor

// #include<iostream>
// using namespace std;
// class constructor{
//     int c;
//     public:
//     constructor(int a, int b){
//         c = a*b;
//         // cout<<"the value of c is "<<c<<endl;//we can also write in it
//     }
//     void printnumber(){
//         cout<<"the value of c is "<<c<<endl;
//     }

// };
// int main(){
//     constructor n = constructor(3, 4);
//     constructor w = constructor(12, 12);
//     n.printnumber();
//     w.printnumber();
//     return 0;
// }

//Another way

// #include<iostream>
// using namespace std;
// class constructor{
//     int a;
//     int b;
//     public:

//     constructor(int , int);
//     void printnumber(){
//         cout<<"The number is "<<a<<" + "<<b<<endl;
//     }

// };
// constructor :: constructor(int x, int y){
//     a = x;
//     b = y;
// }

// int main(){
//     constructor a = constructor(3, 4);
//     a.printnumber();
//     return 0;
// }

// Constructor Overloading In C++

// #include <iostream>
// using namespace std;
// class photocopy
// {
//     int a, b;

// public:
//     photocopy(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     photocopy(int x)
//     {
//         a = x;
//         b = 0;
//     }
//     void printnum()
//     {
//         cout << "The given number is " << a << " and " << b << endl;
//     }
// };
// int main(){
//     photocopy p = photocopy(5, 7);
//     photocopy pn = photocopy(5);
//     p.printnum();
//     pn.printnum();
//     return 0;
// }

// Constructors With Default Arguments

// #include<iostream>
// using namespace std;
// class trial{
//     int data1;
//     int data2;
//     public:
//     trial(int a, int b = 10){ // likewise we can make many default value
//         data1 = a;
//         data2 = b;
//     }
//     void printdata(){
//         cout<<"the value of data is "<<data1<<" and "<<data2<<endl;
//     }
// };
// int main(){
//     trial t(4);// if the value of data is not given then it prints its bydefault value
//     trial t(4, 67);
//     t.printdata();
//     return 0;
// }

// Dynamic Initialization of Objects Using Constructors

// #include <iostream>
// using namespace std;
// class bankdeposite
// {
//     int years;
//     int principal;
//     float rate;
//     float returnvalue;

// public:
//     bankdeposite(){};
//     bankdeposite(int b, int c, float a)
//     {
//         principal = b;
//         years = c;
//         rate = a;
//         returnvalue = principal;
//         for (int i = 0; i < c; i++)
//         {
//             returnvalue *= (1 + rate);
//         }
//     }
//     bankdeposite(int b, int c, int a)
//     {
//         principal = b;
//         years = c;
//         rate = float(a) / 100;
//         returnvalue = principal;
//         for (int i = 0; i < c; i++)
//         {
//             returnvalue *= (1 + rate);
//         }
//     }
//     void show_data()
//     {
//         cout <<endl<< "The principal amount was "
//         << principal<< " return value after " << years << " is " 
//         << returnvalue << endl;
//     }
// };
// int main(){
//     bankdeposite b1, b2, b3;
//     int p, y, R;
//     float r;
//     cout<<"Enter the value of a, b and c"<<endl;
//     cin>>p>>y>>r;
//     b1 = bankdeposite(p, y, r);
//     b1.show_data();

//     cout<<"Enter the value of a, b and c"<<endl;
//     cin>>p>>y>>R;
//     b2 = bankdeposite(p, y, R);
//     b2.show_data();
    
//     return 0;
// }

// Copy Constructor in C++ 

// #include<iostream>
// using namespace std;
// class number{
//     int a;
//     public :
//     number(){
//         a = 0;
//     }
//     number(int num){
//         a = num;
//     }
//     number(number &str){ // program also run if it is not defined
//         cout<<"using the copy constructor !!"<<endl;
//         a = str.a;
//     }
//     void printal(){
//         cout<<"The value of a is "<<a<<endl;
//     }

// };
// int main(){
//     number x, y, z(56);
//     x.printal();
//     y.printal();
//     z.printal();
//     number er(z);//this is the way of using copy constructor
//     er.printal();// it passs the copy of z in given er
    

//     return 0;
// } 