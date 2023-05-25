// Revisiting Pointers: new and delete Keywords in CPP

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 12;
//     int *p = &a;
//     cout<<"the address of a is "<<p<<endl;
//     //new keyword
//     int *ptr = new int(45);
//     *ptr = 876;
//     cout<<"the value of address ptr is "<<*(ptr)<<endl;

//     //another operator(keyword)
//     int *adr = new int [3];
//     adr[0] = 34;
//     adr[1] = 49;
//     adr[2] = 75;
//     delete [] adr;//it free the memory
//     cout<<"the value of adr[0] is "<<&adr[0]<<endl;
//     cout<<"the value of adr[1] is "<<&adr[1]<<endl;
//     cout<<"the value of adr[2] is "<<&adr[2]<<endl;

//     cout<<"the address of adr[0] is "<<adr[0]<<endl;
//     cout<<"the address of adr[1] is "<<adr[1]<<endl;
//     cout<<"the address of adr[2] is "<<adr[2]<<endl;

//     //delete operator(keyword)
//     return 0;
// }

// Pointers to Objects and Arrow Operator in CPP

// #include<iostream>
// using namespace std;
// class complex{
//     int imagine, yes;
//     public:
//     void set_data(int a, int b){
//         imagine = a;
//         yes = b;
//     }
//     void get_data(){
//         cout<<"the value of imaginary is "<<imagine<<endl;
//         cout<<"the value of yes is "<<yes<<endl;
//     }

// };
// int main(){
//     // complex cp;
//     // complex *what = &cp;
//     complex *what = new complex;

//     // (*what).set_data(4, 67);
//     what->set_data(34,8);

//     what->get_data();

//     complex *whatr = new complex[4];
//     whatr->set_data(34,8);
//     whatr->get_data();

//     return 0;
// }

// Array of Objects Using Pointers in C++

// #include<iostream>
// using namespace std;
// class dukan{
//     int id;
//     float price;
//     public:
//     void set_data(int a, float b){
//         id = a;
//         price = b;
//     }
//     void get_data(){
//         cout<<"the value of id is "<<id<<endl;
//         cout<<"the value of salary is "<<price<<endl;
//     }
// };
// int main(){
//     dukan *dkn = new dukan[3];
//     dukan *dknplus = dkn;
//     int p;
//     float q;
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<"Input the id and salary of item "<<i+1<<endl;
//         cin>>p>>q;
//         dkn->set_data(p,q);
//         dkn++;
//     }
//     for (int j = 0; j < 3; j++)
//     {
//         cout<<endl<<"----Item number----- "<<j+1<<endl;
//         dknplus->get_data();
//         dknplus++;
//     }
    
    
//     return 0;
// }

// this Pointer in C++

// #include<iostream>
// using namespace std;
// class Basic{
//     int variable;
//     public:
//     // Basic & set_data(int variable){
//     void set_data(int variable){

//         //variable = variable;//the output of this program is garbage-->wrong way;
//         this->variable = variable;
//         // return *this;
//     }
//     void get_data(){
//         cout<<"the value of variable is :" <<variable<<endl;
//     }
// };
// int main(){
//     Basic bcs;
//     // bcs.set_data(67).get_data();
//     bcs.set_data(67);
//     bcs.get_data();
//     return 0;
// }