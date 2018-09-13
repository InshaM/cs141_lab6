//include in the  libabry
#include<iostream>
using namespace std;

//Write down the function that has two int parameters.
void funcR(int a, int b, int &c ){
	if(a<b){
	c = a;
	}
	else {
	c = b;
	}
}
// drive function :
int main(){int p,q,min;
	//asking the user for any two numbers
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//call the numbers for argument .
	funcR(p,q,min);
	// Showing the user the minimum :
	cout<<"The minimum among the numbers "<< p << " and " << q <<" is "<< min <<endl;
	
       
return 0;
}
