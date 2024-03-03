#include <stdio.h>
int main()
{   int n,m;
     scanf("%d %d",&n,&m);
    int a;
    int sum;
    int max=0;
     for(int i=0;i<n;i++)
     { sum=0;
        for(int j=0;j<m;j++)
        {   scanf("%d",&a);
            sum=sum+a; }
        if(sum>max)
        max=sum; }
     printf("%d",max);
    return 0; }