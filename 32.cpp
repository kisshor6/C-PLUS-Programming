// Vector In C++ STL
//It is almost like array//we can resize it as our choice
//In given below we are using methods //there are many methods in stl

// #include<iostream>
// #include<vector>
// using namespace std;
// template <class T>
// void display(vector<T> &v){
//     cout<<"Displaying this vector :";
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//         // cout<<v.at(i)<<" ";//it repeats the same value twice
//     }
//     cout<<endl;
    
// }
// int main(){
//     int element, size=5;

//     vector<int> vec1;//It Is a zero length Integer vector
    
//     vector <char>vec2(4);//four element character from vector 2
//     vec2.push_back('X');// declaring the value

//     vector<char>vec3(vec2);//four element character from vector 2

//     vector<char>vec4(3,'E');
//     vector<int>v(8, 9);

//     display(vec1);
//     display(vec2);
//     display(vec4);
//     display(v);
//     // cout<<"input the size of a vector :";
//     // cin>>size;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout<<"enter an element to add a vector : ";
//     //     cin>>element;
//     //     vec1.push_back(element);
//     // }
//     // vec1.pop_back();//it reduces the last element from the list
    

//     // display(vec1);
//     // vector<int> :: iterator iter = vec1.end();//It add the given value in arr-list according to required place
//     // vec1.insert(iter,4, 200);//(4) makes the copy  OF GIVEN NUMVER(200)
//     // display(vec1);
    
//     return 0;
// }

// List In C++ STL

// #include<iostream>
// #include<list>
// using namespace std;

// void show_data(list<int> &data){
//     list<int> :: iterator item;
//     for (item = data.begin(); item != data.end(); item++)
//     {
//         cout<<*item<<"  ";
//     }
//     cout<<endl;
    
// }
// int main(){
//     list<int> list1;//This is the list with 0 length

//     list1.push_back(4);//this is the list with size 4 and their value is empty
//     list1.push_back(45);//this is the list with size 45 and their value is empty
//     list1.push_back(24);//this is the list with size 24 and their value is empty
//     list1.push_back(49);//this is the list with size 49 and their value is empty

//      //Removing element from the list                                              
//     // show_data(list1);
//     // list1.pop_front();//Removing element from the first
//     // list1.pop_back();//Removing element from the list
//     // list1.remove(24);//Remove the given value from the list
//     // show_data(list1);

//     //this is the another way to create list
//     list<int>list2(4);
//     list<int> :: iterator itr;
//     itr = list2.begin();
//     *itr = 43;
//     itr++;
//     *itr = 57;
//     itr++;
//     *itr = 96;
//     itr++;
//     *itr = 45;
//     itr++; 
//     show_data(list2);

//     //Reversing the list

//     list2.reverse();
//     show_data(list2);

//     //sorting the data continuosly

//     // list2.sort();//arranging ascending order
//     // cout<<"the given value after sorting : ";
//     // show_data(list2);
//     // list2.merge(list2);//arranging descending order
//     // cout<<"the given value after merging : ";
//     // show_data(list2);

//     // swap 

//     list1.swap(list2);//this swap all data of list1 in list2
//     show_data(list2);


  
//     return 0;
// }