#include<iostream>
using namespace std;
struct student{
	char name[20];
	int adm_no;
	int mark;
	int ce;
	int pe;
	int totalmark;
	};
int main(){
	student st;
	cout<<"<==========Enter Student Details===========>"<<'\n';
	cout<<"Enter student name :";
	cin>>st.name;
	cout<<"Enter Your Admission Number :";
	cin>>st.adm_no;
	cout<<"Enter Your mark :";
	cin>>st.mark;
	cout<<"Enter Your Pe mark :";
	cin>>st.pe;
	cout<<"Enter Your ce mark :";
	cin>>st.ce;
	st.totalmark=st.ce+st.pe+st.mark;
	cout<<"<========Student details========>"<<'\n';
	
	cout<<"\n Student name :"<<st.name;
	cout<<"\n Student admission Number :"<<st.adm_no;
	cout<<"\n Student Mark :"<<st.mark;
	cout<<"\n Student Pe :"<<st.pe;
	cout<<"\n Student Ce :"<<st.ce;
	cout<<"\n Student Total Mark :"<<st.totalmark;
	
	}
