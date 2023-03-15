#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long num1,num2,num3;
cin>>num1>>num2>>num3;
	long long x=max(num1,num2);
	cout<<max(x,num3)<<" ";
	long long y=min(num1,num2);
	cout<<min(y,num3);
	
} 
