#include <iostream>
#define N 4
using namespace std;
int main()
{
    int i, j, c=0, A[N][N];
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            do
            {
                cin>>A[i][j];
            } while (A[i][j]<0 or A[i][j]>9);
            if (A[i][j]==0)
            {
                c++;
            }
        }
    }
    cout<<endl<<"En total hay "<<c<<" ceros";

    return 0;
}