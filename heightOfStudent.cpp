#include<iostream>
using namespace std;
int main(){
	int arr[10],largest;
	cout<<"Enter the height of 10 students :";
	for(int i=0;i<10;i++){
		cin>>arr[i];
		}
	for(int j=0;j<10;j++){
		if(arr[0]<arr[j]){
			arr[0]=arr[j];
			}
		}
		largest=arr[0];
		cout<<"largest"<<largest;
	
	}
