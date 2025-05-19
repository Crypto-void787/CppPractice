#include<iostream>
using namespace std;
int main(){

    int a= 6,b=5;
    // Arithematic operators
    cout<<"The value of a+b is : "<<a+b<<endl;
    cout<<"The value of a-b is : "<<a-b<<endl;
    cout<<"The value of a/b is : "<<a/b<<endl;
    cout<<"The value of a*b is : "<<a*b<<endl;
    cout<<"The value of a&b is : "<<a%b<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl;
// Assignment operator 
    cout<<"The value of a==b is : "<<(a==b)<<endl;
    cout<<"The value of a!=b is : "<<(a!=b)<<endl;
    cout<<"The value of a>=b is : "<<(a>=b)<<endl;
    cout<<"The value of a<=b is : "<<(a<=b)<<endl;
    cout<<"The value of a<b is : "<<(a<b)<<endl;
    cout<<"The value of a>b is : "<<(a>b)<<endl;
    cout<<"The value of a==b is : "<<(a==b)<<endl;
// Logical operator 
    cout<<"The value of (a>=b)&(a>b) is given as: "<<((a>=b)&(a>b))<<endl;
    cout<<"The value of (a>=b)&(a>b) is given as: "<<((a>=b)||(a>b))<<endl;
    cout<<"The value of (a>=b)&(a>b) is given as: "<<(!a>=b)<<endl;
    cout<<"The value of (a>=b)&(a>b) is given as: "<<((a>=b)&(a!=b))<<endl;
    cout<<"The value of (a>=b)&(a>b) is given as: "<<((a>=b)&(a<=b))<<endl;
    cout<<"The value of (a>=b)&(a>b) is given as: "<<((a>b)&(a<b))<<endl;

}