// Multilevel Inheritance


// #include<iostream>
// using namespace std;
// class a_student{
//     protected:
//     int roll_number;
//     public:
//     void set_roll_number(int r);
//     void get_roll_number(void);
// };
// void a_student :: set_roll_number(int r){
//     roll_number = r;
// }
// void a_student :: get_roll_number(void){
//     cout<<"Your id is "<<roll_number;
// }
// class b_student : public a_student{
//     protected:
//     float maths;
//     float physic;
//     public:
//     void set_marks(float, float);
//     void get_marks(void);
// };
// void b_student :: set_marks(float m, float p){
//     maths = m;
//     physic = p;
// }
// void b_student :: get_marks(void){
//     cout<<"The marks of math is "<<maths<<endl;
//     cout<<"The marks of physic is "<<physic<<endl;
// }
// class c_student : public b_student{
//     protected:
//     long long ph_number;
//     public:
//     void set_number(long long);//this is because we are going to store long integer number
//     void get_number(void);
// };
// void c_student :: set_number(long long n){
//     ph_number = n;
// }
// void c_student :: get_number(void){
//     cout<<"Your phone number is "<<ph_number<<endl;
// }
// class display : public c_student{
//     public:
//     void display_all_data(){
//     get_number();
//     get_marks();
//     get_roll_number();
//     }
// };
// int main(){
//     display kiss;
//     kiss.set_number(9844839758);
//     kiss.set_marks(47, 87);
//     kiss.set_roll_number(45);
//     kiss.display_all_data();
   
//     return 0;
// }

//EXAMPLES-->>Multiple Inheritance with Code Example in C++
//there may be more than two classes in multiple inheritance

// #include<iostream>
// using namespace std;
// class base1{
//     protected:
//     int firstInteger;
//     public:
//     void set_firstInteger(int);
// };
// void base1 :: set_firstInteger(int a){
//     firstInteger = a;
// }

// class base2{
//     protected:
//     int secondInteger;
//     public:
//     void set_secondInteger(int);
// };
// void base2 ::set_secondInteger(int b){
//     secondInteger = b;
// }

// class base3{
//     protected:
//     int thirdInteger;
//     public:
//     void set_thirdInteger(int);
// };
// void base3 ::set_thirdInteger(int c){
//     thirdInteger = c;
// }
// class sonof_bases : public base1, public base2, public base3{
//     public:
//     void display_all(){
//         cout<<"Your first Integer is "<<firstInteger<<endl;
//         cout<<"Your second Integer is "<<secondInteger<<endl;
//         cout<<"Your second Integer is "<<thirdInteger<<endl;
//         cout<<"Sum of both Integer is "<<secondInteger + firstInteger + thirdInteger<<endl;
//     }
// };
// int main(){
//     sonof_bases sb;
//     sb.set_firstInteger(90);
//     sb.set_secondInteger(6);
//     sb.set_thirdInteger(64);
//     sb.display_all();
//     return 0;
// }

// practice of inheritance 

// #include<iostream>
// #include <cmath>
// using namespace std;
// class simple_calculator{
//     int a, b;
//     public:
//     void getting_input();
//     void getting_output();
// };
// void simple_calculator :: getting_input(){
//     cout<<"Enter the value of a :";
//     cin>>a;
//     cout<<"Enter the value of a :";
//     cin>>b;
// }
// void simple_calculator :: getting_output(){
//     cout<<"The sum of a and b is :"<<a + b<<endl;  
//     cout<<"The subtraction of a and b is :"<<a - b<<endl;  
//     cout<<"The multipication of a and b is :"<<a * b<<endl;  
//     cout<<"The division of a from b is :"<<a / b<<endl;  
// }

// class scientific_calculator{
//     int a, b;
//     public:
//     void getting_input_sci();
//     void getting_output_sci();
// };
// void scientific_calculator :: getting_input_sci(){
//     cout<<"Enter the value of a :";
//     cin>>a;
// }
// void scientific_calculator :: getting_output_sci(){
//     cout<<"The value of sin(a) is :"<<sin(a)<<endl;  
//     cout<<"The value of cos(a) is :"<<cos(a)<<endl;  
//     cout<<"The value of tan(a) is :"<<tan(a)<<endl;  
//     cout<<"The value of exp(a) is :"<<exp(a)<<endl;  
// }

// class hybrid_calculator : public simple_calculator, public scientific_calculator{
//     public:
    
// };
// int main(){
//     hybrid_calculator hc;
//     hc.getting_input();
//     hc.getting_output();
//     hc.getting_input_sci();
//     hc.getting_output_sci();
//     return 0;
// }
