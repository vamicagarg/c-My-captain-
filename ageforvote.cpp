#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"input the age of the candidate"<<endl;
	cin>>age;
	
	if(age>=18)
	{
		cout<<"congratulation! You are eligible for casting your vote."<<endl;
	}
	else
	{
		cout<<"sorry! You are not eligible to cast your vote"<<endl;
		cout<<"You will be able to cast your vote after "<<18-age<<" years"<<endl;
	}
	return 0;
}
