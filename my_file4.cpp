#include<iostream>
using namespace std;

int main()
{
   int num1,num2;
   cout<<"enter the value of num1: \n"; /*Insertion operator*/
   cin>>num1; /*Extraction operator*/
   cout<<"enter the value of num2: \n"; /*Insertion operator*/
   cin>>num2; /*Extraction operator*/

   cout<<"the sum is "<<num1+num2;

   /*here few line r commented to run code collectively*/
    // return 0;
// }

// int main()
// {
    int age1,age2,age3,age4,age5,age6,age7,age8,age9,age10;
    cout<<"\nEnter age of 1st student: \n "; 
    cin>>age1; 
/*age of stu # 1*/
    cout<<"Enter age of 2nd student: \n "; 
    cin>>age2; 
/*age of stu # 2*/
    cout<<"Enter age of 3rd student: \n "; 
    cin>>age3; 
/*age of stu # 3*/
    cout<<"Enter age of 4th student: \n "; 
    cin>>age4; 
/*age of stu # 4*/
    cout<<"Enter age of 5th student: \n "; 
    cin>>age5; 
/*age of stu # 5*/
    cout<<"Enter age of 6th student: \n "; 
    cin>>age6; 
/*age of stu # 6*/
    cout<<"Enter age of 7th student: \n "; 
    cin>>age7; 
/*age of stu # 7*/
    cout<<"Enter age of 8th student: \n "; 
    cin>>age8; 
/*age of stu # 8*/
    cout<<"Enter age of 9th student: \n "; 
    cin>>age9; 
    /*age of stu # 9*/
    cout<<"Enter age of 10th student: \n "; 
    cin>>age10; 
    /*age of stu #10*/

     int sum=age1+age2+age3+age4+age5+age6+age7+age8+age9+age10;
    cout<<"here is sum of all ages: \n "<<sum;
 
    cout<<"\nso here is the average age of all students\n"<<age1+age2+age3+age4+age5+age6+age7+age8+age9+age10/2;
  
        int aliMarks, zaraMarks, tahaMarks, jojoMarks; // Corrected variable names
    
        cout << "Ali's marks: ";
        cin >> aliMarks;
        cout << "Zara's marks: ";
        cin >> zaraMarks;
        cout << "Taha's marks: ";
        cin >> tahaMarks;
        cout << "Jojo's marks: ";
        cin >> jojoMarks;
    
        cout << "Here are marks of all: "
             << "Ali: " << aliMarks << ", "
             << "Zara: " << zaraMarks << ", "
             << "Taha: " << tahaMarks << ", "
             << "Jojo: " << jojoMarks << endl; // Corrected output
    
        return 0;
    
}
