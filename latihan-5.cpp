#include<iostream>
using namespace std;

int main(){
	
	int number;
	
	cout<<"Enter an integer: ";
	cin>>number;
	
	if(number>=0){
		cout<< "you enetered a positie integer: "<< number << endl;
	}
	else{
		cout<< "You entered a negative integer: "<< number << endl;
	}
	
	cout << "this line is always printed";
	return 0;
}
