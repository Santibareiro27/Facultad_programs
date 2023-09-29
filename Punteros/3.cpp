#include <iostream>
#include <string>
#define N 30
using namespace std;

int main(int argc, char *argv[]) {
	char Name[N], *p=Name;
	int c=0;
	cin.get(Name);
	for (int i=0;i<strlen(Name);i++)
	{
		switch (*(p+i))
		{
		case 'A':
			c++; break;
			
		case 'E':
			c++; break;
			
		case 'I':
			c++; break;
			
		case 'O':
			c++; break;
			
		case 'U':
			c++; break;
			
		case 'a':
			c++; break;
			
		case 'e':
			c++; break;
			
		case 'i':
			c++; break;
			
		case 'o':
			c++; break;
			
		case 'u':
			c++; break;
		}
	}
	cout<<"El nombre "<<Name<<" tiene "<<c<<"vocales";
	return 0;
}

