#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Your Number :";
    cin>>num;
    if(num<0){
        cout<<"Number is Negative ";
    }else if(num>0){
        cout<<"Number is Possitive";

    }else{
        cout<<"Number is Zero";
    }
}