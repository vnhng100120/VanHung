#include<iostream>
using namespace std;

int fibonaci(int s)
{
	if(s==0 || s==1) 
		return 1;
	else
		return (fibonaci(s-2)+fibonaci(s-1));
}

void main()
{
	int n;
	cout << "Nhap n: "; 	
	cin >> n;

	cout << fibonaci(n) << "  ";

	cout<<endl;
}
