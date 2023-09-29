#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, r, c;
	cin>>n;
	for (n=n;n<=10;n++)
	{
		for (c=0;c<=10;c++)
		{
			r=n*c;
			cout<<r<<endl;
		}
	}
	return 0;
}

