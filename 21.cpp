// Array of Objects & Passing Objects as Function Arguments in C++


// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     int salary;
//     public:
//     void setid(){
//         salary = 4500;
//         cout<<"Enter the id of employee"<<endl;
//         cin>>id;
//     }
//     void getid(){
//         cout<<"The id of employee is "<<id<<endl;
//     }

// };
// int main(){
//     employee worker[6];
//     for (int i = 0; i < 6; i++)
//     {
//         worker[i].setid();
//         worker[i].getid();
//     }
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class trial{
//     int a;
//     int b;
//     public:
//     void setdata(int x, int y){
//         a = x;
//         b = y;
//     }
//     void setfrom_first(trial o1, trial o2){
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
//     void printnumber(){
//         cout<<"The complex number is "<<a<<" + "<<b<<" i "<<endl;
//     }
// };
// int main(){
//     trial ab, cd, ef;
//     ab.setdata(1, 2);
//     ab.printnumber();

//     cd.setdata(3, 4);
//     cd.printnumber();

//     ef.setfrom_first(ab, cd);
//     ef.printnumber();  
//     return 0;
// }