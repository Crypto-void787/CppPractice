#include<iostream>
using namespace std;

class Students{
 public:
 int roll_no;
 int Marks; 
 void display(){
  cout << "So ur roll_no is: " << roll_no <<endl;
  cout << "Ur total marks are: " << Marks << endl; 
 }

};
int main(){
  // Writing sum program usin' while structure
  int number, sum ; 
  sum = 0 ; 
  number = 1; 
  while (number <= 10){
    sum = sum + number ;
    //  to generate number next to previous-->
    number = number + 1; 
  }
    cout<< " The sum of 10 integer starting from 1 is : " << sum << endl; 
 cout << "_________________________________________" << endl; 
//   Printin' numbers incrementation and decrementation usin' while loop 
    int number_2;
    cout<< "Enter value of number: " << endl ;
    cin>> number_2; 
    while(number_2 != 15 ){
      cout<<" Post incerement value of number is: " << endl; 
        cout<< " SO # is " << number_2++ <<endl ; 
        // gives a post inrecment 
      // continue;  it make it infinite if condition dont met so number'll put break to run it only once
      // It will goes on untill condition met  
      break;
    
    }
    cout<< " pre incremented value of number " << endl ; 
    while(number_2 != 15 ){
        cout<< " SO # is " << ++number_2 <<endl ; 
        // gives pre increment
      // continue;  it make it infinite if condition dont met so number'll put break to run it only once
      // It will goes on untill condition met  
      break;
    
    }
    cout<< " Post  incremented value of number " << endl; 
    cout << " ______________________________________________" <<endl; 
    int j;
    cout<< " \n ENTER VALUE OF J: " ; 
    cin >> j;  
    while( j != 45 ){
      cout<< "SO value is: " << --j << endl;
      break;
      // Pre decrement the value of j 
      //  break dont allow it to repeat agai' n agai' 
    }
    cout << "Pre decrement of j  " << endl; 
    while( j != 45 ){
      cout<< "SO value is: " << j-- << endl;
      break;
      // Post decrement the value of j 
 
    }
    cout<<"Post decrements of j  " << endl;
    cout << "____________________________________" <<endl; 
    // Adding these int through while 
    int c= number_2+j; 
    while (c != 190 ){
      cout<< "\nThe sum of number and j is "<< c << endl;
      break;
    }

    cout << "______________________________________" <<endl;
     // Switch case 
  int age ; 
  cout<<" WRITE UR AGE(18_22): ";
  cin >> age; 
  switch(age){
    case 18:
     cout << "GO in room # 2 "<< endl; 
     break;
    case 19:
     cout << "GO in room # 6 "<< endl; 
     break;
    case 20:
     cout << "GO in room # 4 "<< endl; 
     break;
    case 21:
     cout << "GO in room # 7 "<< endl; 
     break;
    case 22:
     cout << "GO in room # 5 "<< endl; 
     break;
      default:
      cout << " U r not allowed to attend" <<endl; 
  
  }
  cout <<" ___________________________________________" <<endl; 
 
   // DO _ WHILE LOOP 
  int jet_no ; 
  char choice; 
  cout<< "ENter value of jet " ; 
  cin >> jet_no; 
  do
  {
    cout<< " The number of jet u'll won based on ur luck " << endl; 

    cout << "DO u want this continue (Y, N )" << endl; 
     
    cin >> choice;  
    // jet_no++ ;  
  } while (choice == 'Y' || choice =='y' );{
    cout << "\nSO uh won " << endl; 
   
  }
   while (choice == 'n'|| choice =='N' );{
    cout << "Lost " << endl; 
     
  }
  
  int sum_of_digits , digit ; 
  digit = 1 ; 
  sum_of_digits = 0 ; 
  while ( digit <= 9  ){
    sum_of_digits = sum_of_digits + digit; 
    digit = digit + 1  ; 
  }
  cout << "Sum is " << sum_of_digits <<  endl ; 

  cout << " My name is mano " <<endl; 
  cout << " THIS IS WITHOUT ANY KINDA LOOP " << endl; 
   cout<< "\n____________________while LOOOP ______________ "<< endl ;
 int number_3 ; 
 cout<< " Enter number below 10:  " ; 
 cin >> number_3 ;
  while(  number_3 <= 10 ){
     cout  << " My name is mano " <<endl; 
   number_3++ ; 
    }
 
  // USing while loop number print above statemnt multiple line within control manner 

  cout<< "___________INC N DEC______________"<<endl; 
  int b = 4; 
  int a; 
  a = ++b ;
  cout << "The value of a via pre fix inrement of b is : " << a <<endl; 
  a = b++ ;
  cout << "The value of a via post fix inrement of b is : " << a <<endl; 

  cout << "______________________CLASS______________________" <<endl; 

    cout<< " student # 1 data: "<< endl; 
  Students abeera;
  abeera.Marks= 23;
  abeera.roll_no = 45; 
  abeera.display();


    return 0; 
}




