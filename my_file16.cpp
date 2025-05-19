#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a+b ; 
    return c;
}
// This will not swap a and b 
void swap(int a, int b ){
      int temp = b ;
      a = b ;
      b = temp ;  
}
// Call by refrence using pointers 
void swapPointer(int* a, int* b ){
      int temp = *a ;
      *a = *b ;
      *b = temp ;  
}
// // Call by refrence using C++ reference variable 
// void swapReferenceVar(int &a, int &b ){
//     int temp = a ;
//     a = b ;
//     b = temp ;  
  
// }

// Call by refrence using C++ reference variable 
int & swapReferenceVar(int &a, int &b ){
      int temp = a ;
      a = b ;
      b = temp ;  
      return a;
}

int main(){
    int a = 6;
    int b = 7;
    cout << "The sum of a and b is : " << sum(a,b)<<endl;
    cout<<"The value of a is : " << a << ", and value of b is :" << b << endl;
    // swap(a,b);  This will not swap 
    // swapPointer(&a, &b); // This will swapby using reference variable 

    // swapReferenceVar(a, b) ; ---> Above 3rd commented code refere to it
    // cout<<"The value of a is : " << a << ", and value of b is :" << b << endl;

    swapReferenceVar(a, b) = 766 ;
    // I can make it equal to another value by using 'return a' with & 
    cout<<"The value of a is : " << a << ", and value of b is :" << b << endl;

    return 0 ; 
}