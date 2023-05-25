// Static Data Members & Methods in C++ OOPS

//Static members

// #include <iostream>
// using namespace std;
// class employee
// {
//     static int count; //it increase its value by 1 automatically

//     int data_emp;

// public:
//     void set_data()
//     {
//         cout << "Enter all the records of a Employee : ";
//         cin >> data_emp;
//         count++;
//     }
//     void get_data()
//     {
//         cout << "the data of employee is :" << data_emp << endl;
//         cout << "The number of this employee is :" << count << endl;
//     }
// };
// //int employee ::count; //It is a static variable which default value is 0 
// int employee ::count = 1000; // We can also change the value of it
// int main()
// {
//     employee emp, pow, rrr;//They all share(access) the static variable
//     emp.set_data();
//     emp.get_data();

//     pow.set_data();
//     pow.get_data();

//     rrr.set_data();
//     rrr.get_data();
//     return 0;
// }

//Static Function

#include <iostream>
using namespace std;
class Static_function{
    static int name;
    int data_emp;
    public:
    void set_data()
    {
        cout << "Enter all the records of a Employee : ";
        cin >> data_emp;
        name++;
    }
    void get_data()
    {
        cout << "the data of employee is :" << data_emp << endl;
        cout << "The number of this employee is :" << name << endl;
    }
    static void fun1(){
        cout<<"we are using the static function "<<name<<endl;
    }
};
int Static_function :: name;
int main(){
    Static_function sf, fm, nm;

    sf.set_data();
    sf.get_data();
    Static_function :: fun1();

    fm.set_data();
    fm.get_data();
    Static_function :: fun1();

    nm.set_data();
    nm.get_data();
    Static_function :: fun1();
    return 0;
}