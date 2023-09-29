#include <iostream>
using namespace std;
int main()
{
    float A[4][5], pr=0;
    int i, j;
    for (i=0;i<4;i++)
    {
        for (j= 0;j<5;j++)
        {
            cout<<"Elemento ["<<i+1<<"]x["<<j+1<<"]: ";
            do
            {
                cin>>A[i][j];
            } while (A[i][j]<0);
            pr+=A[i][j];
        }
    }
    pr/=20;
    cout<<endl<<pr<<endl;
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            if (A[i][j]>pr-pr*0.2 and A[i][j]<pr+pr*0.2)
            {
                cout<<A[i][j]<<" ";
            }
            else
            {
                cout<<"# ";
            }
        }
        cout<<endl;
    }

    return 0;
}