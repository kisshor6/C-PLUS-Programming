// File I/O in C++: Working with Files 

// #include<iostream>
// #include<fstream>

// using namespace std;
// int main(){
//     // string st = "this is the first file of c++ programming ";
//     // ofstream yes("file_of_c++.txt");//this is the syntax to create new file
//     // yes<<st;//this is the syntax to write text in file

//     //reading files
//     ifstream yeah("file_of_c++.txt");//this is the syntax to write text in file
//     string str2;
//     getline(yeah, str2);
//     yeah>>str2;
    
//     cout<<str2;
//     return 0;
// }

// File I/O in C++: Read/Write in the Same Program & Closing Files | C++

// #include<iostream>
// #include<fstream>

// using namespace std;
// int main(){
//     ofstream yes("file_of_c++.txt");//this is the syntax to create new file
//     string name;
//     cout<<"Enter your name : ";
//     cin>>name;    
//     yes<<name;//this is the syntax to write text in file

//     // //reading files
//     ifstream yeah("file_of_c++.txt");//this is the syntax to write text in file
//     cout<<"your name is : "<<name;
//     // getline(yeah, name);
//     yeah>>name;
//     yeah.close();


//     return 0;
// }  


// another way to // File I/O in C++: open() and eof() functions 
  
//  #include<iostream>
//  #include<fstream>
//  using namespace std;
//  int main(){
//     ofstream file;
//     file.open("third.txt");//opening new file by new method
//     file<<"this is the first line\n";
//     file<<"this is the second line\n";
//     file<<"this is the third line\n";
//     file<<"this is the fourth line\n";
//     file<<"this is the<< line\n";
//     file.close();

//     //Reading the file by another file
//     ifstream find;
//     string st, st2;
//     find.open("third.txt");
//     find>>st>>st2;
//     cout<<st<<st2;
//     while (find.eof()== 0)
//     {
//         getline(find, st);
//         cout<<st<<endl;
//     }
    
//     find.close();


//     return 0;
//  } 