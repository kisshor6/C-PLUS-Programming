// Functions & Function Prototypes in C++

// #include<iostream>
// using namespace std;
// //..this is called Function prototype
// // int sum(int q, int e);
// int sum(int, int);//not needed to write formal parameters if we write it in below

// int main(){
//     int a, b;
//     cout<<"Enter the first number :";
//     cin>>a;
//     cout<<"Enter the second number :";
//     cin>>b;
//     cout<<"The sum of first and second number is :"<<sum(a,b);
//     return 0;
// }
// int sum(int q, int e){
//     int c = (q+e);
//     return c;
// }


// Call by Value & Call by Reference in C++ 

#include<iostream>
using namespace std;
int require(int a, int b){
    return a+b;
}
// void swap(int a, int b){
//     int temp = a;
//     a = b;//this is the wrong way we have to use pointer
//     b = temp;
// }
void swap(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}//another way
void swapchat(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    //cout<<"The sum of a and b is :"<<require(3, 8);//this is called call by value
    int x = 23, y = 96;
    // swap(x, y);//wrong way
    swap(&x, &y);
    cout<<"the value of x is " <<x<<" and y is "<<y<<endl;
    int t=9,l=7;
    swapchat(t, l);
    cout<<"the value of t is " <<t<<" and l is "<<l;
    return 0;
}