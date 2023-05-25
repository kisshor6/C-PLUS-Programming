// Constants, Manipulators & Operator Precedence

//Constants
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 34;
//     a = 100;//likewise we can change the value
//     cout<<"the value of a is : "<<a<<endl;
//     //if we dont want to change the value then we declar like this
//     const int  b = 456;
//     //b = 234;//then we cannot change the value because b is constant
//     cout<<"the value of b is :"<<b;
//     return 0;
// }

// Manipulators--> it program decorative and readable

// #include<iostream>
// #include<iomanip>//it must be written to use setw keyword

// using namespace std;
// int main(){
//     int a = 34, b = 120, c = 7812;
//     cout<<"the value of a without setw is "<<a<<endl;
//     cout<<"the value of b without setw is "<<b<<endl;
//     cout<<"the value of c without setw is "<<c<<endl;

//     cout<<"the value of a with setw is "<<setw(4)<<a<<endl;
//     cout<<"the value of b with setw is "<<setw(4)<<b<<endl;
//     cout<<"the value of c with setw is "<<setw(4)<<c<<endl;

//     return 0;
// }

// Operator Precedence

#include <iostream>
using namespace std;
int main()
{
    int a = 12, g = 45, h = 90;
    int c = ((a * g) + h); //when the operator procedure is equal then the associativity is left to right
    cout << c<<endl;
    cout<<4*6/4+23-90;//example
    return 0;
}