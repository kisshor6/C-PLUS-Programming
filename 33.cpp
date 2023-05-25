// Map In C++ STL 

// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;
// int main(){
//     map<string, int>marks;
//     marks["hatta"] = 56;
//     marks["soaltee"] = 67;
//     marks["dinesh"] = 6;


//     map<string, int> :: iterator itr;

//     marks.insert({{"kisshor", 67},{"psyco", 90}});//another way to insert map
//     for (itr=marks.begin(); itr !=marks.end(); itr++)
//     {
//         cout<<(*itr).first<<" "<<(*itr).second<<"\n";
//     }
//     cout<<"the size of marks is : "<<marks.size();
//     return 0;
// }

// Function Objects (Functors) In C++ STL 

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {34, 5, 7, 90, 35, 27};
    sort(arr, arr+6);
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}