#include <iostream>
#define N 5
using namespace std;

int main(int argc, char *argv[]) {
	int Vec[N];
	
	for(int i=0;i<N;i++){
		cout<<"Ingrese un elemento: ";
		cin>>Vec[i];
		Vec[i]=Vec[i]*2;
	}
	for(int i=0;i<N;i++){
		cout<<Vec[i];
		cout<<endl;
	}
	return 0;
}

