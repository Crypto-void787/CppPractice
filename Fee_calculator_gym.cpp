#include<iostream>
using namespace std;
int main(){
    float hour;
    float amount;
    cout<<"Enter the hours you spent at gym: ";
    cin>>hour;
    if (hour<=0)
    {
       cout<<"Invalid input. Please Enter positive number of hours!"<<endl;
    }
    
    else if (hour>1)
    {
      int Total_price= hour*200;
      cout<<"Total gym usage fee:  Rs "<<Total_price<<endl;

    }
    else{
        cout<<"Total gym usage fee: Rs 0"<<endl; 
    }
    return 0;
}

