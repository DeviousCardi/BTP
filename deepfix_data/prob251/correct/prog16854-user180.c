#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int n, int y)
{   if(n<=3){
        return (n+1)/2 ; }
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(memarray[y-1][n-1]!=-1)
        return memarray[y-1][n] ;
   if(y==1) {
            memarray[0][n]=1;
            return memarray[0][n]; }
    if(y==2){
        memarray[1][n]=getways(n,1)+getways(n-3,2);
        return memarray[1][n]; }
    memarray[2][n]=getways(n,2)+getways(n-5,3);
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