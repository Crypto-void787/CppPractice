// LETS START GIRL:

#include<iostream>
using namespace std;
int main(){
    int squad[4]={17,18,19,20};
    cout<<"Thae value at index 0 is: "<<squad[0]<<endl;
    cout<<"Thae value at index 1 is: "<<squad[1]<<endl;
    cout<<"Thae value at index 2 is: "<<squad[2]<<endl;
    cout<<"Thae value at index 3 is: "<<squad[3]<<endl;
/*Partial declaring*/
    int home[10]={200,300,400,500,600,700,800,900,123,45};
    cout<<"Thae value at index 0 is: "<<home[0]<<endl;
    cout<<"Thae value at index 1 is: "<<home[1]<<endl;
    cout<<"Thae value at index 2 is: "<<home[2]<<endl;
    cout<<"Thae value at index 3 is: "<<home[3]<<endl;
    cout<<"Thae value at index 4 is: "<<home[4]<<endl;
    cout<<"Thae value at index 5 is: "<<home[5]<<endl;
    cout<<"Thae value at index 6 is: "<<home[6]<<endl;
    cout<<"Thae value at index 7 is: "<<home[7]<<endl;
    cout<<"Thae value at index 8 is: "<<home[8]<<endl;
    cout<<"Thae value at index 9 is: "<<home[9]<<endl;

    cout << "\n______________________EXAMPLE_________________" << endl; 
     int scores[5] = {90, 85, 78, 92, 88};

    for (int i = 0; i < 5; i++) {
        cout << "Score " << i + 1 << ": " << scores[i] << endl;
    }
 
    cout << "\n________________________________________________" <<endl; 
      int marks[] ={23,24,25,22};

   cout<<"These are marks::"<<endl;
   cout<<marks[0]<<endl;
   cout<<marks[1]<<endl;
   cout<<marks[2]<<endl;
   cout<<marks[3]<<endl;

   int mathMarks[4];
   mathMarks[0] = 345;
   mathMarks[1] = 333;
   mathMarks[2] = 376;
   mathMarks[3] = 356;

   cout<<"These are mathMArks::"<<endl;
   cout<<mathMarks[0]<<endl;
   cout<<mathMarks[1]<<endl;
   cout<<mathMarks[2]<<endl;
   cout<<mathMarks[3]<<endl;

   // U can change the value of array "
   marks[2]=25;
   cout<<"Changed marks= "<<marks[2]<<endl;
   cout<<"Changed marks= "<<marks[3]<<endl;

cout << "\n ____________________________________________________-" << endl; 

   int Hills[]={11,12,13,14,15,16};
    cout<<"The value of array hills is "<<Hills<<endl;

    cout<<"Or it can ie "<<endl;

    cout<<"The value at hill 0 is : "<<Hills[0]<<endl;
    cout<<"The value at hill 1 is : "<<Hills[1]<<endl;
    cout<<"The value at hill 2 is : "<<Hills[2]<<endl;
    cout<<"The value at hill 3 is : "<<Hills[3]<<endl;
    cout<<"The value at hill 4 is : "<<Hills[4]<<endl;

  cout<<"Or ther's an other way to write this:"<<endl;

 // BY USING FOR LOOP !!

 for (int i = 0; i <4 ; i++)
 {
    cout<<Hills[i]<<endl;
 }
 // OH YEAH H......
 /*SOME MORE PRACTICE THEN CHOO MNTR */
    cout << "\n ______________________________________" << endl ;
// GONNA MAKE IT WITH DO_WHILE LOPP LETS DIVE INTO IT :

    int myarray[5];
    int i;
     do
     {
      myarray[i]= i*2 ;
      i++;
     } while (i<5);
     cout<<"Array elements: "<<endl;
     for (int i = 0; i < 5 ; i++)
     {
        cout<<myarray[i]<<" "<<endl;
     }
     
cout << "\n___________________________________________" << endl; 
      int my_array[6];
    int b;
    do
    {
        my_array[b]=b*2;
        b++;
    } while (b<6);
    cout<<"ARRAY ELEMENTS: "<<endl;
    for (int i = 0; i < 6; i++)
    {
       cout<<my_array[i]<<"  "<<endl;
    }    

    cout << "\n_____________________________________-" << endl ;


    int ride[10];
    int h;
    do
    {
        ride[h]=h*2;
        h++;
    } while (h<10);
    for (int i = 0; i < 10; i++)
    {
        cout<<"THe value of ride is: "<<ride[i]<<" "<<endl;
    }   

    cout << "\n__________________________________" << endl ; 

 int arr[5]={3,5,6,7,9};
 
    int max=arr[0];
    for(int i=0; i<5 ; i++ )
    {
        if (arr[i]> max )
        {
           max=arr[i];
        }
        
    }
    cout << "Maximum number: " << max << endl;

    cout << "\n__________________________________" << endl ; 
// NOW FOR MINIMUM NUMBER 
      int min_no[7]={34,67,46,28,29,24,234};
    int min=min_no[0];
    for(int i =0; i<7; i++)
    {
        if(min_no[i]<min)
        min=min_no[i];

    }
    cout<<"THE MINIMUM NUMBER IS : "<<min<<endl;
    

cout << "\n ______________________________________" << endl ;

    //GONNA MAKE ANOTHER ARRAYYY:

    int YOE[6]={6,12,18,24,30,36};
    for (int i = 0; i < 6; i++)
    {
        cout<<"THE VIBES OF YOE FROM HEAD TO TOE: "<<YOE[i]<<endl;
    }

    cout << "\n____________________________________-" <<endl; 
    int momo[34];  
    int r = 0;      
    do {
        momo[r] = r*2;  
        r++;
    } while(r < 34);
    
    for(int j = 0; j < 34; j++)  
    {
        cout << "The value of jojo[" << j << "]: " << momo[j] << endl;
    }

    cout << "\n___________________________________________-" <<endl; 
     // POINTERS N ARRAY ::
 
       int jojo[4]={32,25,45,65};
    int* p =jojo;
    cout<<"THE VALUE OF JOJO[0] IS: "<<*p<<endl;
    cout<<"THE VALUE OF JOJO[1] IS: "<<*(p+1)<<endl;
    cout<<"THE VALUE OF JOJO[2] IS: "<<*(p+2)<<endl;
    cout<<"THE VALUE OF JOJO[3] IS: "<<*(p+3)<<endl;

    
    cout << "\n___________________________________________-" <<endl; 
  // LEMME DO PRACTICE AGAIN 

     int LEO[11]={23,25,34,32,21,35,64,8,6, 56, 78};
     int* k=LEO;
     for (int k = 0; k < 11 ; k++)
     {
       cout<<"THE VALUE OF LEO WITHOUT POINTERS DEREFEreNCE IS: "<<LEO[k]<<endl;
     }
      
    cout << "\n___________________________________________-" <<endl; 
    //  THE POINTERS WITH ARRAYS::
     cout<<"THE VAlUE OF (k+1) IS: "<<*(k+1)<<endl;
     cout<<"THE VAlUE OF (k+2) IS: "<<*(k+2)<<endl;
     cout<<"THE VAlUE OF (k+3) IS: "<<*(k+3)<<endl;
     cout<<"THE VAlUE OF (k+4) IS: "<<*(k+4)<<endl;
     cout<<"THE VAlUE OF (k+5) IS: "<<*(k+5)<<endl;
     cout<<"THE VAlUE OF (k+6) IS: "<<*(k+6)<<endl;
     cout<<"THE VAlUE OF (k+7) IS: "<<*(k+7)<<endl;
     cout<<"THE VAlUE OF (k+8) IS: "<<*(k+8)<<endl;
     cout<<"THE VAlUE OF (k+9) IS: "<<*(k+9)<<endl;
     cout<<"THE VAlUE OF (k+10) IS: "<<*(k+10)<<endl;

    //   cout<<*(k)<<endl;
      cout<<*(k++)<<endl;
      cout<<*(++k)<<endl;


cout << "\n______________________________________-" <<endl; 
 cout << " ______________________END _____________________________"<< endl; 
    return 0;
}
