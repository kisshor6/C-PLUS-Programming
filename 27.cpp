// Ambiguity Resolution in Inheritance in C++ 


// #include<iostream>
// using namespace std;
// class base1{
//     public:
//     void greeting(){
//         cout<<"this is from nepalgunj"<<endl;
//     }
// };
// class base2{
//     public:
//     void greeting(){
//         cout<<"this is from Washington DC"<<endl;
//     }
// };
// class last : public base1, public base2{
//     int a;
//     public:
//     void greeting(){
//         base2 :: greeting();//resolving the ambiquity
//     }
// };
// // class A{
// //     public :
// //     void helo(){
// //         cout<<"Hello everyone my name is thug of america";
// //     }
// // };
// // class B : public A{
// //     public :
// //     void helo(){
// //         cout<<"Ladies and gentleman I am coming";
// //     }
// // };
// int main(){
//     last lt;
//     lt.greeting();

//     // B a;
//     // a.helo();
    
//     return 0;
// }

// Virtual Base Class in C++

// #include<iostream>
// using namespace std;
// class student{//this all data inharite in test and sports class so we use (virtual)
//     protected:
//     int roll_number;
//     public:
//     void set_number(int a){
//         roll_number = a;    
//     }
//     void get_number(){
//         cout<<"Your roll number is "<<roll_number<<endl;
//     }    
// };
// class test : virtual public student{
//     protected:
//     float maths, physics;
//     public:
//     void set_marks(float a, float b){
//         maths = a;
//         physics = b;
//     }
//     void get_marks(){
//         cout<<"your result is here :"<<endl
//         <<"maths :"<<maths<<endl
//         <<"physics :"<<physics<<endl;
//     }
// };
// class sports : virtual public student{
//     protected:
//     float score;
//     public:
//     void set_score(float c){
//         score = c;
//     }
//     void get_score(){
//         cout<<"your total score from sports is :"<<score<<endl;
//     }
// };
// class result : public test, public sports{
//     float total_score;
//     public:
//     void show_result(){
//         total_score = maths + score + physics;
//         get_marks();
//         get_score();
//         get_number();
//         cout<<"your total score is "<<total_score<<endl;
//     }
// };

// int main(){
//     result my;
//     my.set_number(9);
//     my.set_marks(78.6, 85.7);
//     my.set_score(300);
//     my.show_result();
//     return 0;
// }


// Constructors in Derived Class in C++

// #include<iostream>
// using namespace std;
// class base1{
//     int data;
//     public:
//     base1(int i){
//         data = i;
//         cout<<"the constructor of base class is called "<<endl;
//     }
//     void printdata1(){
//         cout<<"the data of base1 is : "<<data<<endl;
//     }
// };
// class base2{
//     int data2;
//     public:
//     base2(int j){
//         data2 = j;
//         cout<<"the constructor of second base class is called "<<endl;
//     }
//     void printdata(){
//         cout<<"the data of base1 is : "<<data2<<endl;
//     }
// };
// class derived : public base1, public base2{
//     int derived1, derived2;
//     public:
//     derived(int a, int b, int c, int d): base1(a), base2(b){
//         derived1 = c;
//         derived2 = d;
//         cout<<"derived data class is called "<<endl;
//     }
//     void get_derived_data(){
//         cout<<"the value of derived1 is :"<<derived1<<endl;
//         cout<<"the value of derived2 is :"<<derived2<<endl;
//     }
// };
// int main(){
//     derived dd(4, 8, 5, 9);
//     dd.get_derived_data();
//     dd.printdata1();
//     dd.printdata();
//     return 0;
// }

// Initialization list in Constructors in Cpp 


// #include<iostream>
// using namespace std;
// class what{
//     int k;
//     int l;
//     public:
//     // what(int a, int b): k(a), l(b) {//this is called initialization which is a method to give value
//     // what(int a, int b): k(a), l(a+b) {
//     // what(int a, int b): k(a), l(k+b) {
//     // what(int a, int b): k(a), l(a*b) {
//     // what(int a, int b): k(a), l(a+l)// { -->RED Flag this will create problems because a will be initialized first
//     what(int a, int b){
//         k = a;
//         l = b;
//         cout<<"the value of k is :"<<k<<endl;
//         cout<<"the value of l is :"<<l<<endl;
//     }
// };
// int main(){
//     what wh(5, 9);
//     return 0;
// }
