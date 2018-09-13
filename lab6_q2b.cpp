//including in the libabry
#include<iostream>
using namespace std;

//Giving the function that has two int parameters .
void funcR(int a, int b ,int &c){
	// Now , showing the maximum .
	c=a+b;
}
// drive function .
int main(){int p,q,sum;
	//ask the user for two numbers
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//call the number for arguments.
	funcR(p,q,sum);
	// telling the user the sum
	cout<<"The sum of the numbers "<<p<< " and " << q <<" is "<<  sum <<endl;
	
       
return 0;
}
