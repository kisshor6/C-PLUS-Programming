// Inline Functions, Default Arguments & Constant Arguments in C++


// #include<iostream>
// using namespace std;
// inline int product(int a, int b){
//     // In static case we cannot use inline function
//     static int c;//it runs at once time
//     c = c + 1;// the value will increased
//     return (a*b)+c;
//     // return (a*b);
// }
// int main(){
//     int a, b;
//     cout<<"Input the value of a :";
//     cin>>a;
//     cout<<"Input the value of b :";
//     cin>>b;
//     cout<<"The product of a and b is :"<<product(a, b);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int payment(int principle){
//     float rate = 1.08;
//     return principle*rate;
// }
// int main(){
//     int a = 25000;
//     cout<<" If you have RS "<<a<<" your outcome is RS "<<payment(a);
//     return 0;
// }