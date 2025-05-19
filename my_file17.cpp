// #include<iostream>
// using namespace std;
// inline int product(int a , int b){
//     // not recommended to use inline with below static function
//     // static int c= 0;
//     //  c = 0+ 1; /*First use 0 and then add up with 1 */
//     return(a*b);
// }
// int main(){
//     int a, b;
//     cout << "Enter value of a: " ;
//     cin >> a;
//     cout << "\nEnter value of b: ";
//     cin >> b ; 
//     cout << " \nThe product is : " << product(a,b) << endl; 
//     cout << " \nThe product is : " << product(a,b) << endl; 
//     cout << " \nThe product is : " << product(a,b) << endl; 
//     cout << " \nThe product is : " << product(a,b) << endl; 

// // So this is inline function we used it where program is too small 
// // and simple to run but when we use it for large program it full our memory

// }

/*Default value : */
#include<iostream> 
using namespace std;
int moneybalance(int currentmoney , float factor = 1.04){
    return currentmoney*factor;
}
// int strlen (const int *money){
// constant no one can change 
// }
int main(){
    int money = 50000;
    cout << "If you have "<< money << " Rs then you will get money " << moneybalance(money) << "_Rs In your account ";
    cout << "For VIP: If you have "<< money << " Rs then you will get money " << moneybalance(money,1.1) << "_Rs In your account ";
/*Its actually default value ____whenever compiler dont get any specific value it assign
that default but when once u specified it ____it apply that specific value as in VIP example  */
    return 0 ; 
}