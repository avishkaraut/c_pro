#include<iostream>
using namespace std;

int main()
{
	double num1 , num2;
	char op;
	
	cout<<"enter first no:";
	cin>>num1;
	
	cout<<"enter operator (+,-,*,/):";
	cin>>op;
	
	cout<<"enter second no:";
	cin>>num2;
	
	switch(op)
	{
		case '+':
			cout<<"result:"<<num1+num2;
			break;
		
		case '-':
			cout<<"result:"<<num1-num2;
			break;
		
		case '*':
			cout<<"result:"<<num1*num2;
			break;
			
		case '/':
			if(num2 != 0)
			{
			 cout<<"result:"<<num1/num2;
		    }
			else
			{
			
				cout<<"divsion by zero not allowed";
		    }
			break;
		
		default:
			cout<<"invalid operator";

	}
}
