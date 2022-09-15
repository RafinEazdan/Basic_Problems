// Armstrong Number:
// 153= 1^3 + 5^3 + 3^3
// 3+125+27 = 153

/* This program is to identify if a number is armstrong or not */

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int n;
    cin>>n;

    int sum=0;
    int originalN=n;
    while(n>0){
        int ld = n%10;
        sum = sum + pow(ld,3);
        n=n/10;
    }
    if(sum==originalN){
        cout<<"Yes\n";
    }
    else{
    cout<<"No\n";
    }

	return 0;
}
