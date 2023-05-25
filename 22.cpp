// Friend Functions in C++ 

// #include<iostream>
// using namespace std;
// class complexn{
//     int a, b;
//     public:
//     void setnumber(int s1, int s2){
//         a = s1;
//         b = s2;
//     }
//     friend complexn sumdata(complexn o1, complexn o2);
//      void printnumber(){
//         cout<<"The complex number is "<<a<<" + "<<b<<" i "<<endl;
//     }
// };
// complexn sumdata(complexn o1, complexn o2){
//     complexn o3;
//     o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
//     return o3;
// }
// int main(){
//     complexn m1, m2, m3;
//     m1.setnumber(1, 2);
//     m1.printnumber();

//     m2.setnumber(3, 4);
//     m2.printnumber();

//     m3 = sumdata(m1, m2);
//     m3.printnumber();
//     return 0;
// }

// Friend Classes & Member Friend Functions in C++ 

// #include<iostream>
// using namespace std;

// class complexn;
// class calculator{
//     public:
//     int add(int a, int b){
//         return a*b;
//     }
//     int sumcomplex(complexn, complexn );
//     int sumcomplex2(complexn, complexn );
// };
// class complexn{
//     //declaring class as a friend
//     // friend int calculator :: sumcomplex(complexn , complexn );//making friend to particular function
//     // friend int calculator :: sumcomplex2(complexn , complexn );
//     //Alternative method
//     friend class calculator;//making friend to whole class
//     int a, b;
//     public:
//     void setnumber(int s1, int s2){
//         a = s1;
//         b = s2;
//     }
//      void printnumber(){
//         cout<<"The complex number is "<<a<<" + "<<b<<" i "<<endl;
//     }
// };
// int calculator ::sumcomplex(complexn o1, complexn o2){//defining the function
//         return (o1.a + o2.a);
//     }
// int calculator ::sumcomplex2(complexn o1, complexn o2){//defining the function
//         return (o1.b + o2.b);
//     }
// int main(){
//     complexn o1, o2;

//     o1.setnumber(2, 3);
//     o2.setnumber(4, 5);

//     calculator calloce;

//     int vv = calloce.sumcomplex(o1, o2);
//     int ww = calloce.sumcomplex2(o1, o2);

//     cout<<"The sum of final part of a number is "<<vv<<endl;
//     cout<<"The sum of final part of a number is "<<ww<<endl;
//     return 0;
// }

// Friend Functions (Examples & Explanation) 

// #include<iostream>
// using namespace std;

// class B;
// class A{
//     int data;
//     public:
//     void setname(int a){
//         data = a;
//     }
//     friend void add(A, B);

// };
// class B{
//     int data2;
//     public:
//     void setname(int b){
//         data2 = b;
//     }
//     friend void add(A, B);

// };

// void add(A o1, B o2){
//     cout<<"Adding the number of X and Y is "<<o1.data + o2.data2;
// }
// int main(){
//     A m1;
//     m1.setname(3);
//     B m2;
//     m2.setname(8);
//     add(m1, m2);
//     return 0;
// }

// Another example


// #include<iostream>
// using namespace std;
// class G;
// class F{
//     int value;
//     public:
//     void setvalue(int a){
//         value = a;
//     }
//     void display(){
//         cout<<value<<endl;
//     }
//     friend void exchange(F &, G &);
// };
// class G{
//     int value2;
//     public:
//     void setvalue2(int b){
//         value2 = b;
//     }
//     void display(){
//         cout<<value2<<endl;
//     }
//     friend void exchange(F &, G &);
// };
// void exchange(F &a, G &b){
//     int temp = a.value;
//     a.value = b.value2;
//     b.value2 = temp;

// }
// int main(){
//     F f1;
//     G g1;
//     f1.setvalue(34);
//     g1.setvalue2(45);
//     exchange(f1, g1);

//     cout<<"The value of first num is : ";
//     f1.display();
//     cout<<"The value of second num is : ";
//     g1.display();
//     return 0;
// }