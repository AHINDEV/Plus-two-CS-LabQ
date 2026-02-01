#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Your Number :";
    cin>>num;
    switch(num){
        case 0 :cout<<"Number is zero ";break;
        case 1 :cout<<"Number is One ";break;
        case 2 :cout<<"Number is Two ";break;
        case 3 :cout<<"Number is Three ";break;
        case 4 :cout<<"Number is Four ";break;
        case 5 :cout<<"Number is five ";break;
        case 6 :cout<<"Number is six ";break;
        case 7 :cout<<"Number is seven ";break;
        case 8 :cout<<"Number is eight";break;
        case 9 :cout<<"Number is nine ";break;
        default :cout<<"Invalid Digit ";
    }
}