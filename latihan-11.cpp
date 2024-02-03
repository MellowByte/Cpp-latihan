#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i, num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"\nThe multiplication table of "<<num<<" is:\n";
	for(i=1; i<=10; i++)
		cout<<num<<setw(3)<<"*"<<setw(4)<<i<<setw(4)<<"="<<setw(4)<<num*i<<"\n";
	return 0;
}
