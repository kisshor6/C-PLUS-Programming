// C++ Templates: Must for Competitive Programming 

// #include<iostream>
// using namespace std;
// template <class T>//it is a custom datatype  
// class vectir{
//     public:
//     T * arr;
//     int size;
//     public:
//     vectir(T m){
//         size = m;
//         arr = new T[size];
//     }
//     T sumvec(vectir &v){
//         T d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
        
//     }
// };
// int main(){
//     // vectir <int> v1(3);
//     // v1.arr[0] = 4;
//     // v1.arr[1] = 3;
//     // v1.arr[2] = 1;
//     // vectir <int> v2(3);
//     // v2.arr[0] = 1;
//     // v2.arr[1] = 0;
//     // v2.arr[2] = 1;
//     // int a = v1.sumvec(v2);
//     // cout<<a<<endl;

//     vectir <float> v1(3);//we can give custom datatype in (<float>)
//     v1.arr[0] = 4.1;
//     v1.arr[1] = 3.5;
//     v1.arr[2] = 1.9;
//     vectir <float> v2(3);//we can give custom datatype in (<float>)
//     v2.arr[0] = 2.4;
//     v2.arr[1] = 4.5;
//     v2.arr[2] = 1.4;
//     float a = v1.sumvec(v2);
//     cout<<a<<endl;
//     return 0;
// }

// C++ Templates: Templates with Multiple Parameters

// #include<iostream>
// using namespace std;
// template <class T1, class T2>//it is a custom datatype  
// class myclass{
//     public:
//     T1 data1;
//     T2 data2;
//     myclass(T1 a, T2 b){
//         data1 = a;
//         data2 = b;
//     }
//     void display(){
//         cout<<this->data1<<endl<<this->data2;
//     }
// };
// int main(){
//     myclass<char, float> oject('Y', 56.8);//we can declar any types of datatype by template
//     oject.display();
//     return 0;
// }

// C++ Templates: Class Templates with Default Parameters

// #include<iostream>
// using namespace std;
// template <class T1=int, class T2=float, class T3=char>
// class what{
//     public:
//     T1 a;
//     T2 b;
//     T3 c;
//     what(T1 x, T2 y, T3 z){
//         a = x;
//         b = y;
//         c = z;
//     }
//     void display(){
//         cout<<"the value of a is : "<<a<<endl;
//         cout<<"the value of b is : "<<b<<endl;
//         cout<<"the value of c is : "<<c<<endl;
//     }
// };
// int main(){
//     what <> wh(5, 9.5, 'W');
//     wh.display();
//     cout<<endl;
//     what <float, char, char> h(5.8, '$', '@');
//     h.display();
//     return 0;
// }

// C++ Function Templates & Function Templates with Parameters

// #include<iostream>
// using namespace std;
// template <class T>
// void swapp(T &a, T &b){
//     T temp = a;
//     a = b;
//     b = temp;
// }
// // template <class R1, class R2>
// // float sumfunction(R1 a, R2 b){
// //     float c = (a+b)/2.0;
// //     return c;    
// // }
// int main(){
//     // float a = sumfunction(9, 4);
//     // cout<<"the average value of a and b is : "<<a;

//     int a = 3;
//     int b = 9;
//     swapp(a, b);
//     cout<<a<<endl<<b;
//     return 0;
// }

// Member Function Templates & Overloading Template Functions in C++ 

// #include<iostream>
// using namespace std;
// template <class T>
// class tempal{
//     public:
//     T data;
//     tempal(T a){
//         data = a;
//     }
//     void display();
// };
// template <class T>
// void tempal<T> :: display(){
//         cout<<"the value of data is : "<<data<<endl;
// }

// template <class T>
// void function1(T a){
//     cout<<"this is the first function()"<<a<<endl;
// }
// void function(int a){
//     cout<<"this is the function() without template "<<a<<endl;
// }
// int main(){
//     // tempal <float> h(8.6);
//     tempal <int> h(78);
//     // tempal <char> h('K');
//     h.display();
//     function1(5);//exact match find the higher priority
//     function(67);//exact match find the higher priority
//     return 0;
// }