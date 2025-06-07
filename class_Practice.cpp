

#include<iostream>
#include<string>
using namespace std; 
 class bank_acc_manager 
 {
     

 }; 
 class student
 {
    private: 
     string name; 
     float marks[5]; 
     float sum , average ; 

    public: 
     void student_input(void);
     void average_marks(void);
     void display_data(void); 

 };
  void student :: student_input(void) 
     { 
         cout << "Student name: " ; 
          cin >> name; 
         for (int i= 0; i<5 ; i++)
          {
             cout << "Subject " << i +1  << ": " ; 
             cin >> marks[i]; 
         }
      } 
      void student :: average_marks(void)
       { 
         sum = 0; 
          for( int i=0; i<5 ; i++ ) 
             {
                 sum += marks[i] ; 
             }
              average = sum / 2 ; 
       } 
         void student :: display_data(void) 
         {
             cout << "\n-------Student Result--------\n" ; 
             cout << "Student name: " << name << endl; 
             for (int i = 0; i<5 ; i++ )
                 {
                   cout << "Marks : " << marks[i] << endl; 
                 }
             cout << "Total marks: " << sum << endl; 
             cout << "average Marks: " << average ;     
         }


int main(){

     student s1; 
     s1.student_input(); 
     s1.average_marks(); 
     s1.display_data(); 
     return 0; 
} 