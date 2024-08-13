/*To convert binary number to decimal format*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n;
cout<<"Enter the number in binary format "<<endl;  //The input number is assumed as a decimal number by the compiler
cin>>n;
 
 int ans=0;
 int i=0;
while(n!=0){
    int digit= n%10;

    if(digit==1){
        ans = ans + pow(2, i);
    }

    n=n/10;

    i++;
}

cout<<"The number in decimal format is "<<ans<<endl;
return 0;
}
