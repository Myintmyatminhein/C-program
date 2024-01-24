#include <iostream>
using namespace std;
int main()
{

    int a[]={8,4,6,2,10};
    int b[]={9,5,3,7,11};
    int c[10],i,j=0;
    for(i=0;i<5;i++)
    {
        c[j]=a[i];
        j++;
    }
    for(i=0;i<5;i++)
    {
        c[j]=b[i];
        j++;
    }
    for(i=0;i<10;i++)
    {
        cout<<c[i]<<",";
    }

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(c[i]>c[j])
            {
                int tem;
                tem=c[i];
                c[i]=c[j];
                c[j]=tem;
            }
        }
    }
    cout<<endl;
    for(i=0;i<10;i++)
    {
        cout<<c[i]<<",";
    }
}