#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 6;
    cout<<"The value of a was: "<<a<<endl;
    a=4 ;
    cout<<"The value of a is: "<<a<<endl;

/********Constant variable(flaot,int,char,double) ***********/
 
       const int r = 3;
       cout<<"The value of r is : " << r << endl;
       const float t= 6.7 ;
       cout<<"The value of t is: "<< t << endl; 
    //   int r = 8 ; it gives an error bcuz its constant n we cant change it
     
    /**************Manipulator(endl and setw )***********/

    int d=2, f=3, g= 4 ; 
    cout<<"The value of d without setw is:"<<d<<endl;
    cout<<"The value of f without setw is:"<<f<<endl;
    cout<<"The value of g without setw is:"<<g<<endl;

    cout<<"The value of d with setw is:"<<setw(5)<<d<<endl;
    cout<<"The value of f with setw is:"<<setw(5)<<f<<endl;
    cout<<"The value of g with setw is:"<<setw(5)<<g<<endl;
    
    /************Operator precedence***********/

    int j= 5 , l= 7;
    int k = ((((j*4)+ l )+ 43) - 65);
    cout<<"the vale of k is: "<<k<<endl;






}