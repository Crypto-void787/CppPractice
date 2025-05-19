#include<iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

union money 
{
    int rice;
    char car;
    float pounds;
};

// THis ep help me as i can only write ep as refer

int main(){  
    cout<<"ENUM CONCEPT"<<endl;
    enum Block{BlockA,BlockB,Blockc,BlockD};
  
   Block c2=BlockB;
   cout<<"LOCATES POSITION OF BLOCKS"<<(c2==1)<<endl;
    Block b1=BlockA;
    cout<<"THE VALUR OF B1 AS BLOCK A: "<<b1<<endl;
    Block b2=BlockB;
    cout<<"THE VALUR OF B1 AS BLOCK B: "<<b2<<endl;
    Block b3=Blockc;
    cout<<"THE VALUR OF B1 AS BLOCK C: "<<b3<<endl;
    Block b4=BlockD;
    cout<<"THE VALUR OF B1 AS BLOCK D: "<<b4<<endl;

    cout<<"THE VALE OF BLOCK A IS: "<<BlockA<<endl;
    cout<<"THE VALE OF BLOCK B IS: "<<BlockB<<endl;
    cout<<"THE VALE OF BLOCK C IS: "<<Blockc<<endl;
    cout<<"THE VALE OF BLOCK D IS: "<<BlockD<<endl;

    // cout<<"STRUCT CONCEPT"<<endl;
//     ep harry;
//    struct employee monkey;
//    struct employee duffer;
//    struct employee momo;
//    struct employee yoyo;
//    struct employee john;
//    struct employee jojo;
//    struct employee tata;
//    harry.eId=3;
//    harry.favChar='x';
//    harry.salary=4;
//    //N i can make others same like this
// cout<<"HARRY'S ID:"<<harry.eId<<endl;
// cout<<"HARRY'S favChar:"<<harry.favChar<<endl;
// cout<<"HARRY'S salary:"<<harry.salary<<endl;
    
// cout<<"UNION CONCEPT"<<endl;
// union money m1;

//     m1.rice=20;
//     m1.car='c';
//     m1.pounds=3.4;

//     cout<<m1.pounds<<endl;

    return 0;
}