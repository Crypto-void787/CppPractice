#include<iostream>
using namespace std;
int main(){

    
    
    int age; 
    cout<<"Enter your age: "<<endl;
    cin>>age;
    // if((age<18)&&(age<0)){
        
    //     cout<<"you can not come to party "<<endl;

    // }
    // else if (age==18){
    //         cout<<"you r kid n u'll get kid pass"<<endl;
    //    }

    // else if (age=0 ){
    //     cout<<"Hey ! enjoy baby"<<endl;
    
    // }
    

    // else{
    //     cout<<"you can go dude!"<<endl;

    // }
    
    // char name;
    //     cout<<"Please enter ur number "<<endl;
    //     cin>>name; 
    //     if(name!=0){
    //         cout<<"U r kid u r not alllowed . . . .. "<<endl;
    //     }
    //     else if (name==0){
    //         cout<<"Hey dude!! U can come . . . .. "<<endl;
    //     }
    //     else if (name=0){
    //         cout<<"you r not born yet baby "<<endl;
    //     }
       
  

        // 6:00 AM – Wake Up & Boot Up
        // 6:30 AM – Breakfast & Dev Fuel
        // 7:00 AM – Deep Focus: Personal Projects or Learning
        // 9:00 AM – Prep for Work
        // 10:00 AM – Standup & Planning
        // 11:00 AM – Code
        // 1:00 PM – Lunch & Tactical Reset
        // 2:00 PM – Problem Solving / Debugging Grind
        // 4:00 PM – PR Reviews / Documentation
        // 5:30 PM – Wrap-Up & Sync
        // 6:00 PM – Work Shutdown
        // 6:30 PM – Side Hustle / Learning Block 2
        // 7:30 PM – Dinner & Chill
        // 8:30 PM – Reflect / Read / Unplug
        // 10:00 PM – Sleep

        /******selection control structure : switch case statement********/
        switch (age)
        {
        case 22:
         cout<<"Yu can go enjoy"<<endl;
          
            break;
        case 21:
         cout<<"Yu can go enjoy yup "<<endl;
          
            break;
        case 32:
         cout<<"Yu can go enjoy"<<endl;
          
            break;
        case 18:
         cout<<"Welcome new adult!"<<endl;
          
            break;
        case 9:
         cout<<"Go back no way 9 yrs child"<<endl;
          
            break;
        
        default:
        cout<<"No special case"<<endl;
            break;
        }
        return 0 ;
        
    }