#include<iostream>
using namespace std;
int main(){
    /*POINTERS--> data types which holds adress of other data type**/
    int a = 6;
    int* b= &a;
    // & ---> (Address of the) operator 
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is: "<<&a<<endl;

    // * ----> (Value at)Dereference operator

    cout<<"The value at address b is: "<<*b<<endl;

    //**POINTER TO POINTER  */
    int** c= &b ;
    cout<<"The address of pointer b is : "<<c<<endl;
    cout<<"The address of pointer b is : "<<&b<<endl;
    cout<<"The value of pointer b is : "<<*b<<endl;
    cout<<"The value of pointer c is :"<<*c<<endl;
    cout<<"The pointer c is value_of(value_of):  "<<**c<<endl;

    cout << "\n___________________________________________" << endl ; 
       cout<<"\nHeloo world!"<<endl;
      int h=34;
      int* j=&h;
      cout<<"Here is the addres of int j: "<<j<<endl;
      cout<<"Here the value stored by j : "<<*j<<endl;
      
      int** k=&j;
      cout<<"Here is the adress contain by k as it holds j and j hold a: "<<j<<endl;
      cout<<"THe value k have is as it ahve j n j have a sooo: "<<**k<<endl;
      cout<<"Value:"<<k<<endl;
      /*Well i learned it */
    
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     
// }