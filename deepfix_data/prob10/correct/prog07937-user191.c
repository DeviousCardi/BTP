#include<stdio.h>
int main()
{   int i,j,n,count=0,m=0;
    scanf("%d",&n);
    int a[n],max[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]); }
    for(i=0;i<n;i++)
    {   for(j=i+1;j<n;j++)
        {   if(a[j]>a[i])
            count=count+1; }
        max[i]=count;
        count=0; }
    for(i=0;i<n;i++)
    {   if(max[i]>m)
        m=max[i]; }
    printf("%d",m);
    return 0; }