#include<iostream>
using namespace std;
int main()
{
	float total=100;
	float &sum = total;
	cout<<"total: "<<total;
	cout<<"\n";
	cout<<"sum: "<<sum;
	cout<<"\n";
	sum=sum+10;
	cout<<"total: "<<total;
	cout<<"\n";
	cout<<"sum: "<<sum;
	return 0;
}
