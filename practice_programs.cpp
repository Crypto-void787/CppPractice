#include<iostream>
using namespace std;

int main(){

    cout << "_________To calculate avg age of students___________" << endl; 
    int age1 , age2, age3, age4, age5, age6, age7, age8, age9, age10;
     cout << "\nEnter Age 1 :";
     cin >> age1;
     cout << "\n Enter Age2 : ";
     cin >> age2;
     cout << "\n Enter Age3 : ";
     cin >> age3;
     cout << "\n Enter Age4 : ";
     cin >> age4;
     cout << "\n Enter Age5 : ";
     cin >> age5;
     cout << "\n Enter Age6 : ";
     cin >> age6;
     cout << "\n Enter Age7 : ";
     cin >> age7;
     cout << "\n Enter Age8 : ";
     cin >> age8;
     cout << "\n Enter Age9 : ";
     cin >> age9;
     cout << "\n Enter Age10 : ";
     cin >> age10;
     int total =  age1 + age2+ age3+ age4+ age5+ age6+ age7+ age8+ age9+ age10;
     float average=total/2;
     cout<<"AVERAGE AGE OF STUDENT IS: "<<average<<endl;
     
     cout << " ___________________________________________" << endl; 
      cout << "\n___________PROGRAM TO CALCULATE 1st N last digit ____"<<endl;
     
      int number, digit;
    cout << "\nPLease enter 6_digit: " << endl;
    cin >> number;
    digit = number%10;
    cout <<  digit<<", ";
   
     number = number / 10 ;
     digit = number % 10;
     cout<< digit << ", ";

     number = number / 10 ;
     digit = number % 10;
     cout<< digit << ", ";

     number = number / 10 ;
     digit = number % 10;
     cout<< digit << ", ";

     number = number / 10 ;
     digit = number % 10;
     cout<< digit << ", ";

     number = number / 10 ;
     digit = number % 10;
     cout<< digit << ", ";
 
     cout <<"\nANOTHER EXAMPLE LIKE THIS: " << endl ;
    
          int number2 , digit2;
    cout << "\nPlease enter 5_digits: ";
    cin >> number2;
    
    digit2= number2 % 10 ;
    cout<<digit2<<", " ; 

    number2 = number2 / 10 ;
    digit2= number2 % 10 ;
    cout<<digit2<<", " ; 

    number2 = number2 / 10 ;
    digit2= number2 % 10 ;
    cout<<digit2<<", " ; 

    number2 = number2 / 10 ;
    digit2= number2 % 10 ;
    cout<<digit2<<", " ; 

    number2 = number2 / 10 ;
    digit2= number2 % 10 ;
    cout<<digit2<<". " << endl; 

      cout << "_____________________________________" << endl; 
      cout << "\n ____Findin' diameter, circumference, area _______" << endl; 

          float radius ;
    cout << "\n Enter radius of circle: ";
    cin >> radius;
    float pi = 3.14;
    float Area, Circumfrence, Diameter;
    //   Formulating diameter :
    Diameter = 2*radius ;
    
    // Formualting Circumfrence :
   Circumfrence = 2* pi * radius ;

    //    Formulating Area : 
    Area = pi * (radius* radius) ; 

    cout << "Area of a circle: "<< Area << endl;
    cout << "Circumfrence of a circle: "<< Circumfrence << endl;
    cout << "Diameter of a circle: "<< Diameter << endl;

  cout <<"_____________________________________________" << endl; 
  cout << "\n _____Program Givin' discout to customers _______" <<endl; 
  
  cout << "\n Yo Discounts open: " << endl;
    int bill;
    cout << "Please enter ur bill:  " ;
    cin >> bill ;


    if(bill>=5000)
    {
        int  discounted_bill = bill* 0.85;
        cout << "You've unlock 15 percent discount YUPP! " <<endl; 
        cout << "Your total bill: " << discounted_bill << endl; 
    }
    else
    {
        float discount= bill * 0.1 ;
        cout << "You got 10 percent discount " << discount << endl;
        float net_payable = bill - discount ;
        cout << "Your total bill: " << net_payable << endl ;
    }
     return 0; 
}

