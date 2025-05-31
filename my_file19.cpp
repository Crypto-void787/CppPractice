
#include<iostream>
using namespace std; 

int sum(int a , int b ){
    cout << "\n       Using function with two arguments : " ; 
    return a+b;
}
int sum(int a, int b, int c){
      cout << "\n     Using function with three arguments : " ; 
    return a+b+c;
}
// Calculate the volume of cyllinder 
int volume(double r , int h ){
    return (3.14 * r* r *h); 
}
// Calculate the area of cube:  
int volume(int a ) {
    return (a * a * a);
}
//  Calculate the area of rectangular 
int volume( int l, int w, int h){
    return (l*w*h);

}
int energy(int m , int g , int h  ){
    return (m*g*h);
}

int main(){
    cout << "The sum of 4 and 4 is ! " << sum(4 , 4) << endl; 
    cout << "The sum of 8 and 6 is ! " << sum(8 , 6) << endl; 
    cout << "The volume of a cyllinder having r=3 and h=6 is:  " << volume(3 , 6) <<endl;
    cout << "The area of cube where a= 3 is:  " << volume(3) <<endl;
    cout << "The area OF rectangle when l= 3 and w= 7 and h=6 is:  " << volume(3 , 7, 6) <<endl;

    cout << "\n  The potential energy for 5Kg and height 6  and g is: " << energy(5 ,6,10);
    return 0;
}