// black list 
// C++ Objects Memory Allocation & using Arrays in Classes

#include <iostream>
using namespace std;
class daataof_food
{
    int food[100];
    int price[100];
    int increase;
    public:
    void find_price(){increase = 0;}
    void set_price(){
        cout<<"Enter the name of your project : "<<endl;
        cin>>food[increase];
        cout<<"Enter the price of your project : "<<endl;
        cin>>price[increase];
        increase++;
    }
    void show_price(){
        for (int i = 0; i < increase; i++){
            cout<<"The price of item with Id "<<food[i] <<" is "<<price[i]<<endl;  
        }
    }
};
int main(){
    daataof_food df;
    df.find_price();
    df.set_price();
    df.set_price();
    df.set_price();
    df.show_price();
    return 0;
}