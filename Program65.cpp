#include<iostream>
using namespace std;
//Program65 to print the sum of odd numbers between 20 and 40 using Do While LOOP

int main()
{
	int sum = 0, w = 20;
	do
	{
		if(w%2!=0)
			sum+=w;
		w++;
	}while(w<=40);

	cout<<"The sum is"<<sum<<endl;
}
