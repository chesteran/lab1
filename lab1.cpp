#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"input a number";
	cin>>x;
	while(x!=1){
	
	if((x%2)==1){
		x=3*x+1;
		cout<<x<<" ";
	}
	else
	{
		x=x/2;
		cout<<x<<" ";
	}
}
return 0;
	
} 
