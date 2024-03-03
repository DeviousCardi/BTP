#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n, int y)
{   if(n<=3){
        return (n+1)/2 ; }
    if(n<=0)
        return 0;
    if(memarray[y-1][n-1]!=-1)
        return memarray[y-1][n] ;
    int a[3]={0,0,0};
    for(int u=y-1;u>=0;u--)
        a[u]=1;
    long a1,b,c;
    a1=getways(n-1,1);
    b=getways(n-3,2);
    c=getways(n-5,3);
    memarray[y-1][n]=a1*a[0]+b*a[1]+c*a[2] ;
    return memarray[y-1][n]; }
int main()
{   int n;
    scanf("%d",&n);
    long result=0;
    for(int i=0;i<3;i++)
        memarray[i]=(long*)malloc(n*(sizeof(long)));
    for(int i=0;i<3;i++)
        for(int j=0;j<n;j++)
            memarray[i][j]=-1;
    result=getways(n,3);
    printf("%ld",result);
    return 0; }