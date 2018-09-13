//including in the library
#include<iostream>
using namespace std;

//The funcion that has two int parameters .
int func(int a, int b ){
	if(a>b){
	return a;}
	else {
	return b;}
}
// drive function.
int main(){int p,q;
	//ask the user for any two numners
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//call the function with number for arguments .
	func(p,q);
	// tell the user the maximum.
	cout<<"The maximum among the numbers "<<p<< " and " << q <<" is "<< func(p,q) <<endl;
	
       
return 0;
}
