#include <iostream>
#include <string>
using namespace std;

// Struct compare to class
//  Understanding structure first

struct students
{
    // public: as its always public
     int ID;
     char name[50];
     char dept[50];
     char grade;

} s1;

/*  Class is same as struct just difference is that struct is always
public by default while class is private by default and we have to set it
public if we wanna access its term */

/* If we replace struct with class its give an error bcz class is by
default private and our variable not gonna leak :) */

class visitors
{
 public:
     int Age;
     char education[50];
     char dept[50];

} r[6];

class binary
{
     string s;

public:
     void read(void);
     void chk_bin(void);
     void ones(void);
     void display(void);
};

void binary::read(void)
{
     cout << "Enter binary digits: ";
     cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::display(void)
{  
     cout << "\ndisplaying your binary number "<< endl;
    for (int i = 0 ; i<s.length() ; i++ )
     {
         cout << s.at(i) ; 
     }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
       if (s.at(i) == '0')
        {
             s.at(i) = '1';
        }
        else
        {
              s.at(i) = '0';
        }
    }
}

int main()
{

    cout << "Binary check program" << endl;
     binary b;
     b.read();
     b.chk_bin();
     b.display(); 
     b.ones(); 
     b.display(); 

    cout << "\nVisitor data ______________" << endl;

    for (int i = 1; i <= 3; i++)
    {
         cout << "Enter your age:";
         cin >> r[i].Age;
 
         cout << "\nEnter your department: ";
 
         cin >> r[i].dept;
 
         cout << "\nYour education level: ";
         cin >> r[i].education;
    }

     cout << "Now students data_________" << endl;
     cout << "\nEnter student ID: ";
     cin >> s1.ID;
     cout << "\nEnter student name: ";
     cin >> s1.name;
     cout << "\nEnter your department: ";
     cin >> s1.dept;
     cout << "\nEnter ur grade: ";
     cin >> s1.grade;
     return 0;
}