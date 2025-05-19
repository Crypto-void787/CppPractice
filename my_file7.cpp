#include<iostream>
using namespace std;

int c = 2; 
int main(){
/***************Built in data_types******************* */
    int a, b ,c ; 
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    c= a+b;
    cout<<"Heres the sum of all of variables: "<<c<<"\nThe value of global variable: "<<::c<<endl;
     float d = 3.45F;
     long double e = 3.45l;

     /********Foat,double,and long double literals **********/

     cout<<"The value of e is : "<<e<<endl<<"The value of d is : "<<d<<endl;
    cout<<"The size of 3.45 is "<< sizeof (3.45)<<endl;
    cout<<"The size of 3.45F is "<< sizeof (3.45F)<<endl;
    cout<<"The size of 3.45l is "<< sizeof (3.45F)<<endl;
    cout<<"The size of 3.45F is "<< sizeof (3.45F)<<endl;
    cout<<"The size of 3.45F is "<< sizeof (3.45L)<<endl;
    cout<<"The size of 3.45l is "<< sizeof (3.45L)<<endl;
    
/*************Reference variables ****************/

     int x= 5.5;
     int & y= x;
     cout<<"Value of x :"<< x<<endl; 
     cout<<"Value of refrence y : "<<y<< endl ;

     /********************Type casting******************/

     int r=25;
     float z =25.5;
     cout<<"Tha type of r is: "<<(float)r<<endl;
     cout<<"Tha type of r is: "<<float(r)<<endl;

     cout<<"Tha type of r is: "<<(int)z<<endl;
     cout<<"Tha type of r is: "<<float(z)<<endl;

     cout<<"Tha type of r is: "<<r+(int)z<<endl;
     cout<<"Tha type of r is: "<<r+int(z)<<endl;
     cout<<"Tha type of r is: "<<z+(int)r<<endl;
     cout<<"Tha type of r is: "<<z+int(r)<<endl;


return 0;
    }
