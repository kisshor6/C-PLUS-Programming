// Destructor in C++ 

// #include<iostream>
// using namespace std;
// class destructor{// Destructor never takes an argument nor does it return any value 
//     static int count;
//     public:
//     destructor(){
//         count++;
//         cout<<"this is the place where constructor is called "<<count<<endl;
//     }
//     ~destructor(){
//         cout<<"this is the place where constructor is called "<<count<<endl;
//         count--;
//     }

// };
// int destructor :: count;
// int main(){
//     cout<<"We are implementing the destructor"<<endl;
//     destructor d1;
//     {
//         cout<<"lets go to what to see"<<endl;
//         destructor d2, d3;
//         cout<<"May be work"<<endl;
//     }
//     cout<<"Getting out from destructor"<<endl;
//     return 0;
// }