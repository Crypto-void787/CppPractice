
#include<iostream>
using namespace std; 
int main(){
  int num1,num2,num3,num4; 
  int digit1, digit2, digit3, digit4 ; 

  cout << " Enter 4-digit number: " ; 
  cin>> num1 ; 
  if(num1>= 10000){
 cout<< "Enter a valid number of 4-digit " << endl;  
  }
else{
  num1; 
  digit1 = num1 % 10 ; 
  
  num2 = num1 / 10; 
  digit2 = num2 % 10; 

  num3 = num2 / 10; 
  digit3 = num3 % 10; 

  num4 = num3 / 10; 
  digit4 = num4 % 10; 

  cout << "First digit: " << digit4 <<endl ; 
  cout << "Last digit: " << digit1 <<endl ; 

}

cout<<"-------------------------------------------------"<<endl; 
  int a= 31 ;
  int b = 20 ;
  int c = 30 ;  
  if( a>b && b>c || a>c  ){
    cout << "True " ; 
  }
  else{
    cout<< "False"; 
  }
cout<< "\n---------------------------------------------------" <<endl; 

  int num[5]= {23,45,63,16,65};
  int *ptr;
  ptr = num; 
  cout<<"\nValue of ptr is:" <<  (*ptr+1*2);

  return 0 ;

}

