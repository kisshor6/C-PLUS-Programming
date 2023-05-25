// Polymorphism in C++  


// #include<iostream>
// using namespace std;
// class baseclass{
//     public:
//     int once;
//     void display(){
//     cout<<"this is the base class is : "<<once<<endl;
//    } 
// };
// class derivedclass : public baseclass{
//     public:
//     int what;
//     void display(){
//     cout<<"this is the content of derived class is : "<<what<<endl;
//     }
// };
// int main(){
//     baseclass *pointerOfBase;
//     derivedclass  secondPrimary;
//     pointerOfBase = &secondPrimary;//pointing base class to derived class

//     pointerOfBase->once = 345;
//     pointerOfBase->display();

//     //pointerOfBase->what = 95;//this is not permitted

//     // pointerOfBase->what = 35;
//     derivedclass * pointerOfDerived;
//     pointerOfDerived = &secondPrimary;

//     pointerOfDerived->what = 56;
//     pointerOfDerived->display();    

//     return 0;
// }

// Virtual Functions in C++

// #include<iostream>
// using namespace std;
// class baseclass{
//     public:
//     int yes = 89;
//     virtual void display(){
//     cout<<"this is the base class is : "<<yes<<endl;
//    } 
// };
// class derivedclass : public baseclass{
//     public:
//     int what = 9;
//     void display(){
//     cout<<"this is the content of derived class is : "<<what<<endl;
//     }
// };
// int main(){
//     baseclass *pointerOfBase;
//     derivedclass  secondPrimary;
//     baseclass  Primary;//pointing base class to derived class

//     pointerOfBase = &secondPrimary;
//     pointerOfBase->display();
// }

// Virtual Functions Example + Creation Rules in C++

// black list 

#include<iostream>
#include<cstring>
using namespace std;
class first{
 protected:
        string title;
        float rating;
    public:
        first(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display(){}
};
class semi_second : public first{
  float videoLength;
    public:
        semi_second(string s, float r, float vl): first(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
    
};
class quatar_second : public first{
    
    int words;
    public:
        quatar_second(string s, float r, int wc): first(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    semi_second djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    quatar_second djText(title, rating, words);

    first* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}


