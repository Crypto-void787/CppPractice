#include<iostream>
using namespace std;
int main(){

    int age; 
    cout << "Enter your age: "<<endl;
    cin >>age;
    if((age<18)&&(age<0)){
        
        cout<<"you can not come to party "<<endl;
    }
    else if (age==18){
            cout<<"you r kid n u'll get kid pass"<<endl;
       }

    else if (age=0 ){
        cout<<"Hey ! enjoy baby"<<endl;
    
    }
    

    else{
        cout<<"you can go dude!"<<endl;

    }
    
    char name;
        cout<<"Please enter ur number "<<endl;
        cin>>name; 
        if(name!=0){
            cout<<"U r kid u r not alllowed . . . .. "<<endl;
        }
        else if (name==0){
            cout<<"Hey dude!! U can come . . . .. "<<endl;
        }
        else if (name=0){
            cout<<"you r not born yet baby "<<endl;
        }
       


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