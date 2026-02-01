#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int length=0;
	char word[50];
	cout<<"Enter your Word :";
	cin.getline(word,50);
	for(int i=0;word[i]!='\0';i++){
		length++;
		}
		cout<<"Length of string is :"<<length;
	}
