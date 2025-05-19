#include<iostream>
using namespace std;
// FUNCTIONS PROTOTYPE
//FUNCTION PROTTOTYPES (ARGUMENTS)
// DECLARATION OF FUNCTION BEFORE MAIN THAT U WILL FIND OUT THAT M B LATER
int sum(int a, int b); //-->Correct syntax
// int sum(int a,b); //-->Incorrect syntax
int sum(int ,int); //-->correct syntax

// ANOTHER FUNCTION"S :

// void g(void); //-->ACCEPTABLE
void g(); //-->ACCEPTABLE

int main(){
    int num1,num2;
    cout<<"ENTER FIRST VALUE: "<<endl;
    cin>>num1;
    cout<<"ENTER SECOND VALUE: "<<endl;
    cin>>num2;
    //NUM1 N NUM2 ARE ACTUAL PARAMETERS:
    cout<<"THE SUM OF THESE IS: "<<sum( num1,num2)<<endl;
   g();
    return 0;
}

int sum(int a,int b){
    // FORMALPARAMETERS A AND B TAKING VALUES FROM ACTUAL PARAMETERS NUM1 AND NUM2
    int c=a+b;
     return c;
 }
 void g(){
    cout<<"\nHELLO !! GOOD MORNING1";
 }
 