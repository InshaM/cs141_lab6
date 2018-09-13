//including in the library.
#include<iostream>
using namespace std;

//Giving the funcion that has two int parameters.
int func(int a, int b){
	// showing their sum
	int sum = a + b;
	return sum;
}
// The drive function
int main(){int c,d;
	//ask the user for any two numbers he likes.
	cout<< "Let the numbers be : ";
	cin>>c>>d;
	// tell user the required sum .
	cout<<"The sum of the numbers "<<c<< " and " << d <<" is : "<< 
	//call the function for numbers as arguments.
        func(c,d) <<endl;
return 0;
}
