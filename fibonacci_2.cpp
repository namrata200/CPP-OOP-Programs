#include<iostream>
using namespace std;
int main()
{
	int i,c,n,first=0,second=1,next;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else{
			next=first+second;
			first=second;
			second=next;
			cout<<next<<endl;
		}
	}	
	return 0;
}
