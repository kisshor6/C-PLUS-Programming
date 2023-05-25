// OOPs Recap & Nesting of Member Functions in C++

// #include<iostream>
// #include<string>
// using namespace std;
// class first{

//     string s;

//     public:
//     void read();
//     void check();
//     void replace();
//     void display();
// };
// void first ::read(){
//     cout<<"Enter the number"<<endl;
//     cin>>s;
// }
// void first :: check(){
//     for (int i = 0; i < s.length(); i++){
//         if (s.at(i) != '0' && s.at(i)!='1'){
//             cout<<" the given number is not a binary number"<<endl;
//             exit(0);
//         }   
//     }    
// }
// void first :: replace(){
//     for (int i = 0; i < s.length(); i++){
//         if (s.at(i) == '0'){
//             s.at(i) = '1';
//         }
//         else{
//             s.at(i) = '0';
//         }
        
//     }    
// }
// void first :: display(){
//     // check();//by this method we can run it internally without 
//     cout<<" displaying your number"<<endl;
//     for (int i = 0; i < s.length(); i++){
//         cout<<s.at(i);    
//     }
// }

// int main(){
//     first name;
//     name.read();
//     name.check();
//     // name.check();// this is not needed to write if it was mentioned before in another function
//     name.display();
//     name.replace();
//     name.display();
//     return 0;
// }
