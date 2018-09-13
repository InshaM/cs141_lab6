//include in the library
#include<iostream>
using namespace std;

//Give the required function that has two int parameters.
int func(int a, int b ){
	if(a>b){
	return b;}
	else {
	return a;}
}
// drive function :
int main(){int p,q;
	//ask the user for any two numbers he wants :
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//call the function with number for arguments :
	func(p,q);
	// tell user the minimum :
	cout<<"The minimum among the numbers "<< p << " and " << q <<" is "<< func(p,q) <<endl;
	
       
return 0;
}
