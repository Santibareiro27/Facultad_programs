#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char *a;
    a="hola";
    for (int x=0;*(a+x)!='\n';x++)
    cout<<*(a+x);
	return 0;
}