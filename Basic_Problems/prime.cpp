/* This program is to determine if a input number is prime or not */

#include <iostream>
using namespace std;

int main (){
	int i,n;
    cin>>n; // n is the input number
    for( i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime\n";
            break;
        }
    }
    if(i==n){
        cout<<"Prime\n";
    }
	return 0;
}
