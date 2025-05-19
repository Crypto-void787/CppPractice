
// "Recursion via Factorial concept "
/*  6! = 5 * 4 * 3 * 2 * 1
    6! = 720 
    0! = 1 by definition  
    1! = 1 by definition  
    so , 
    Formula --------> n = n* (n-1 ) */
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if (n<=1){
//         return 1; 
//     }
//   return n* factorial(n-1) ; 
// }

// int main(){
//   int a; 
//   cout << " Enter the number: " ; 
//   cin >> a ; 
//   cout << "\n The factorial of " << a << " is " << factorial(a) << endl;   
//     return 0;
// }
/*so here if we put number 4 : 
  factorial(4) = 4 * factorial(4-1) 
  factorial(4) = 4 * 3 * factorial(2-1) 
  factorial(4) = 4 * 3 * 2* factorial(1) 
  factorial(4) = 4 * 3 *2 * 1 
  factorial(4) = 24 */

  #include<iostream> 
  using namespace std; 

  int fib(int n){
    if(n<2){
        return 1 ; 
    }
    return fib(n-2) + fib(n-1);
  }

  int factorial(int n){
    if (n<=1){
        return 1; 
    }
    return n * factorial( n- 1 ); 
  }

  int main(){
    int a; 
    cout << "Enter the value : " ;
    cin >> a ; 
    cout << "\n The term in febonacci sequence  " <<a << " is : " <<fib(a) ; 
    return 0;
  }
