// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a=6;
// //     int i=1;
// //     do{
// //         cout<<a*i<<endl;
// //         i++;
// //     }while(i<=10);
// //     return 0;
// // }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=9, b=1;
//     do{ 
//         cout<<a*b<<endl;
//         b++;
//     }
//     while(b<=10);
//         return 0;
// }


/*******/
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     bool isPrime = true;

//     cout << "Enter a positive integer: ";
//     cin >> num;

//     // 0 and 1 are not prime numbers
//     if (num == 0 || num == 1) {
//         isPrime = false;
//     }
//     else {
//         // Check for factors from 2 to num/2
//         for (int i = 2; i <= num / 2; ++i) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if (isPrime)
//         cout << num << " is a prime number.";
//     else
//         cout << num << " is not a prime number.";

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     cout<<"Area of circle"<<endl;
//     double pi=3.14;
//     int radius;
//     cout<<"Enter the value of r: "<<endl;
//     cin>>radius;
//     double area=pi*radius*radius ;
//     double circumference = 2* pi* radius;
//     cout<<"Here is the area of circle: "<<area<<endl;
//     cout<<"Circumference of circle is: "<<circumference<<endl;

//    cout<<"\nArea of a rectangle "<<endl;
//     double length, width;
//     cout<<"Enter length of rectangle: "<<endl;
   
//     cin>>length;
//     cout<<" Enter the width of rectangular: " <<endl;
//      cin>>width;
//      double areaofrectangle= (length*width);
//     cout<<"Here is the area of rectangle: "<<areaofrectangle<<endl;
  
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     cout << "Temperature Conversion Program" << endl;
//     cout << "Please select a number: " << endl;
//     cout << "1. Temperature in Fahrenheit" << endl;
//     cout << "2. Temperature in Celsius" << endl;
//     cout << "3. Temperature in Kelvin" << endl;
//     cout << "Choose a number between 1-3: " << endl;

//     int choice;
//     cin >> choice;

//     if (choice < 1 || choice > 3) {
//         cout << "Invalid number. Select between 1-3. Thank you!" << endl;
//         return 1;
//     }

//     double temp, celsius, fahrenheit, kelvin;

//     switch (choice) {
//         case 1:
//             cout << "Enter temperature in Fahrenheit: ";
//             cin >> temp;
//             celsius = (temp - 32) * 5.0 / 9.0;
//             kelvin = celsius + 273.15;
//             cout << "Temperature in Celsius: " << celsius << endl;
//             cout << "Temperature in Kelvin: " << kelvin << endl;
//             break;

//         case 2:
//             cout << "Enter temperature in Celsius: ";
//             cin >> temp;
//             fahrenheit = (temp * 9.0 / 5.0) + 32;
//             kelvin = temp + 273.15;
//             cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
//             cout << "Temperature in Kelvin: " << kelvin << endl;
//             break;

//         case 3:
//             cout << "Enter temperature in Kelvin: ";
//             cin >> temp;
//             celsius = temp - 273.15;
//             fahrenheit = (celsius * 9.0 / 5.0) + 32;
//             cout << "Temperature in Celsius: " << celsius << endl;
//             cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
//             break;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int R1, R2, R3;
//     cout<<"Enter the R1: "<<endl;
//     cin>>R1;
//     cout<<"Enter the R2: "<<endl;
//     cin>>R2;
//     cout<<"Enter the R3: "<<endl;
//      cin>>R3;
//     int series_R= R1 + R2 + R3;
//     double parallel_R= 1.0/R1 +1.0/R2 + 1.0/R3;
//     cout<<"Here is series resistance: "<<series_R<<endl;
//     cout<<"Here is parallel resistance: "<<parallel_R<<endl;

//     return 0 ;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Please enter ur age: "<<endl;
//     cin>>age;

//     if(age>=18){
//         cout<<"U can vote! Enjoy "<<endl;
        
//     }
//     else{
//         cout<<"U r underage! bug out "<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int hours;
//     cout<<"Enter total hourrs of parked vehical: ";
//     cin>>hours;
//     if(hours<=1){
//         cout<<"Thers's no fee! U can go"<<endl ;
//         cout<<"Enjoy buddy"<<endl;
//     }
//     else if (hours>=2){
//         int fee= hours*200;
//         cout<<"Total fee:  $"<<fee<<endl;
//     }
//       cout<<"Pay it n enjoyii "<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     double height, weight;
//     cout<<"Enter ur height (in m): "<<endl;
//     cin>>height;
//     cout<<"Enter ur weight(in kg): "<<endl;
//     cin>>weight;
//     double BMI= weight/(height*height);
//     if(BMI<18.5){
//         cout<<"U r underweight\n"<<BMI<<endl;
//         cout<<"improve ur diet"<<endl;
//     }
//     else if (BMI >= 18.5 && BMI < 25) {
//         cout<<"Normal BMI\n"<<BMI<<endl;
//         cout<<"Stay happy!"<<endl;
//     }
//     else if (BMI >= 25 && BMI < 30){
//         cout<<"You r overweight!!\n"<<BMI<<endl;
//         cout<<"DO EXCERSICE REGULARLY"<<endl;
//     }
//     else{
//         cout<<"U need to consult doctor\n"<<BMI<<endl;
//     }

//     return 0 ;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Traffic light msgsss program"<<endl;
//     cout<<"You have to select a # btween 1___3 Ok!"<<endl;
//      cout<<"1. Red light"<<endl;
//      cout<<"2. Yellow light"<<endl;
//      cout<<"3. Green light"<<endl;
//      int choice;
//      cin>>choice;
//      switch (choice)
//      {
//      case 1:
//        cout<<"Stop!!!"<<endl;
//         break;
//     case 2:
//       cout<<"Get ready-->"<<endl;
      
//         break;
//       case 3:
//       cout<<"Goooo*"<<endl;
     
//         break;

//         default:
//         cout<<"NO CHOICE BABE!!"<<endl;
//      }

//     return 0;
// }

