#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		while(n>=10){
			int sum=0;
			while(n>0){
				sum=sum+n%10;
				n=n/10;
			}
			n=sum;
		}
		cout<<n<<endl;
	} 
}
