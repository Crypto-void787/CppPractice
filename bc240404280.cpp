

#include<iostream>
#include<string>
using namespace std; 
int main(){
    string Name="XXXXXXXXXXXXX ";
    string Vu_Id="BCXXXXXXX"; 
    cout<<"Name: "<<Name<<endl; 
    cout<<"Vu_Id: "<<Vu_Id<<endl;

    cout<<"-----------------------------------------"<<endl;
    string Numeric_part; 
    cout<<"Enter only numeric value of your id: "; 
    cin>>Numeric_part;
 
    string Middle_value_of_Numeric= Numeric_part.substr(2,5);
   cout<<"Extract middle value of numeric id: "<<Middle_value_of_Numeric<<endl;

   int Burger=250;
   int Pizza = 500;
   int Fries = 150;
   int sandwich= 200;
   int Cold_drink=100;
    
   int burger_qty = Middle_value_of_Numeric[0]-'0'; 
   int Pizza_qty = Middle_value_of_Numeric[1]-'0'; 
   int Fries_qty = Middle_value_of_Numeric[2]-'0'; 
   int Sandwich_qty = Middle_value_of_Numeric[3]-'0'; 
   int Cold_drink_qty = Middle_value_of_Numeric[4]-'0'; 

   cout << "=== Welcome to C++ Cafe ===="<<endl; 
   cout << "Burger       _Rs."<<Burger<<endl;
   cout << "Pizza        _Rs."<<Pizza<<endl;
   cout << "Fries        _Rs."<<Fries<<endl;
   cout << "Sandwich     _Rs."<<sandwich<<endl;
   cout << "Cold drink   _Rs."<<Cold_drink<<endl;

   cout << "-------------------------------\n";
   cout << "      You order summary    \n";
   cout << "-------------------------------\n";
   cout << "Billing Details : "<<endl;

   cout << "Burger: ( "<<burger_qty<<" x "<<Burger<<" ) = " << burger_qty * Burger <<endl;
   cout << "Pizza : ( "<<Pizza_qty<<" x "<<Pizza<<" ) = " << Pizza_qty * Pizza <<endl;
   cout << "Fries: ( "<<Fries_qty<<" x "<<Fries<<" ) = " << Fries_qty* Fries <<endl;
   cout << "Sandwich: ( "<<Sandwich_qty<<" x "<<sandwich<<" ) = " << Sandwich_qty * sandwich <<endl;
   cout << "Cold drink: ( "<<Cold_drink_qty<<" x "<<Cold_drink<<" ) = " << Cold_drink_qty * Cold_drink <<endl;
      
   int original_price = (burger_qty * Burger) + (Pizza_qty * Pizza) + (Fries_qty * Fries) + (Sandwich_qty * sandwich) + (Cold_drink_qty * Cold_drink);
       int total_bill = original_price;
   
       cout << "Total Bill Before Discount: Rs. " << total_bill << endl;
       cout << "----------------------------------\n";
       float discount = 0.0;
       if (total_bill >= 5000)
       {
           discount = total_bill * 0.10;
           cout << "\nCongrats! You've unlocked 10% discount of Rs. " << discount << "!" << endl;
           
       }
       else
       {
           cout << "\nNo discount applied (order below Rs. 5000)!" << endl;
       }
   
       float net_total = total_bill - discount;
   
       cout << "\n=========== Final Bill ===========\n";
       cout << "Total Bill Before Discount: Rs. " << total_bill << endl;
       cout << "Discount: Rs. " << discount << endl;
       cout << "Net Payable Amount: Rs. " << net_total << endl;
       cout << "=========== THANK YOU ===========\n";
       return 0;
   

    return 0;
}

