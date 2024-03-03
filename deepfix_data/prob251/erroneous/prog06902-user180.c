#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m)
{   if(n<=3){
        return (n+1)/2 ; }
    if(memarray[y-1][n]!=-1)
        return memarray[y-1][n] ;
    int a[3]={0,0,0};
    for(int u=y-1;u>=0;u--)
        a[u]=1;
    int a,b,c;
    a=getways(x-1,y);
    b=getways(x-3,y);
    c=getways(x-5,y);
    memarray[y-1][n]=a*a[0]+b*a[1]+c*a[2] ;
    return memarray[y-1][n]; }
int main()
{   int n;
    scanf("%d",&n);
    long result=0;
    for(int i=0;i<3;i++)
        memarray[i]=(long*)calloc(n,(sizeof(long)));
    for(int i=0;i<3;i++)
        for(int j=0;j<n;j++)
            memarray[i][j]=-1;
    result=getways(n,3);
    printf("%ld",result);
    return 0; }