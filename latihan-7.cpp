#include<iostream>
using namespace std;

int main(){
	
	int num;
	
	cout<<"Enter an integer: ";
    	cin>>num;
	
	// outer if condition
	if (num!= 0){
		
		//inner if condition
		if(num>0){
			cout<< "the number is positive. "<< endl;
		}
		// inner else condition
		else{
			cout<< "The number is negative."<<endl;
		}
	}
	// outer else condition
	else{
	cout << "the number is 0 and it is neither positive nor negative."<< endl;;
	}
	
	cout<<"This line is always printed."<<endl;
	return 0;
	
}
