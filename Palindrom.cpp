#include<iostream>
using namespace std;
 int main(){
	int num, rev=0,rem; 
	cout<<"Enter Your Number to Check Palindrome or Not :";
	cin>>num;
	for(int i=num;i>0;i=i/10){
		rem=i%10;
		rev=(rev*10)+rem;
		}
		if(rev==num){
			cout<<"Number is Palindrome";
			}
			else{
				cout<<"Number is not palindrome";
				}
	 }
