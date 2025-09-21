//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int fact(int n){
    if(n<=1)
    return 1;
   
    else return (n*fact(n-1));
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
   
    cout<<"Factorial of "<<n<<" is: "<<fact(n);
}
/* output
Enter number: 5
Factorial of 5 is: 120
*/
