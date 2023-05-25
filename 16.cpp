// Function Overloading with Examples in C++ 

// #include<iostream>
// using namespace std;

// int add(int a, int b){
//     cout<<" Using the overloading with two arguments The value of a and b is :";
//     return a+b;    
// }
// int add(int a, int b, int c){
//     cout<<" Using the overloading with three arguments The value of a and b is :";
//     return a+b+c;   
// }
// int main(){
//     cout<<add(5,5)<<endl;
//     cout<<add(4, 4, 4);
//     return 0;
// }

// another example

// #include<iostream>
// using namespace std;

// int volume(int l, int b, int h){
//     cout<<" The volume of rectangle is :";
//     return l*b*h;    
// }
// int volume(float r, float h){
//     cout<<" The volume of cylinder is :";
//     return 3.14*r*r*h;    
// }

// int main(){
//     int a, b, c;
//     cout<<"Enter the measurement of rectangle : length, breadth and height"<<endl;
//     cin>> a;
//     cin>> b;
//     cin>> c;
//     cout<<volume(a, b, c)<<" cm^3"<<endl;

//     float x, y;
//     cout<<"Enter the measurement of cylinder : radius, height"<<endl;
//     cin>> x;
//     cin>> y;
//     cout<<volume(x, y)<<" cm^3";
//     return 0;
// }