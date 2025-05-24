#include<iostream>
using namespace std;
int main(){
    /*Loops in C++:
    There r three types of loop in c++:
    1) For loop 
    2) While loop 
    3) do_while loop */

    /*****************For loop*******************/
    int u = 1;
    cout<<u; 
    cout << "\n_____________________________________" << endl; 
    // i++;_________I can extend it upto 100 of lines but not decent one
    /*for(initialization; condition ; updation )
      {
     loop body(C++ code);
       }*/ 
    for (int i = 0; i<10; i++)
    {
       cout<<i<<endl; 
    //    i++;__add one more no in output then it comes 
    } 
     cout << "\n__________________________________" << endl; 
    for(int i =6; i<5; i++){
        cout<<i<<endl;
        // i++;
    }
     cout << "\n__________________________________" << endl; 

for( int o=4 ; 30<34; o++){
    cout<<o<<endl;
    break; 
      }
       cout << "\n__________________________________" << endl; 
      /*Well i learned*/

      /*While loop in C++*/
    //  Syntax
    // while(conditon):
    // {
    //   C++ statements;
    // }
   
int p = 1; 
  while(p<=10) {
    cout<<p<<endl;
    p++;
  }
   cout << "\n__________________________________" << endl; 
  int j = 23 ;
  while(j<=30){
    cout<<j<<endl;
    j++;
  }
 cout << "\n__________________________________" << endl; 
  int e = 67;
  while(e<=70){
    cout<<e<<endl;
    e++;
  }
 cout << "\n__________________________________" << endl; 
   
int i = 1; 
do{
    cout<<i<<endl;
    i++;
  }while(i<=10) ;

  int y = 1; 
   cout << "\n__________________________________" << endl; 

do{
    cout<<y<<endl;
    y++;
  }while(false) ;
   cout << "\n__________________________________" << endl; 

    return 0;
} 