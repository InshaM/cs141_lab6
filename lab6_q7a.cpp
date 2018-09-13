//include in the library.
#include<iostream>
using namespace std;
//Write the main function .
char upper(int p){
	int q;
	//giving the condition.
	for(int i=97;i<=122;i++){
		if(p==i){
		q=i;}}
return q;				
}
//The drive function .
int main(){
	//declaring the required variables :
	char a;
	cout<<"enter any alphabet in lowercase:";
	cin>>a;
	//type casting for the alphabets(using ascii code)
	int p=int(a);
	int f=upper(p);
	cout<<"The uppercase of the entered character:"<<char(f-32)<<endl;
return 0;
}


