#include <stdio.h>
#include <stdlib.h>
int i,j;
long *a[3];
for(i=0;i<3;i++)
a[i]=(int *)malloc(30*sizeof(int));
for(i=0;i<3;i++)
for(j=0;j<30;j++)
a[i][j]=0;
long g(int x, int y)
{   int k=x;
    if((y==2&&x<5)||x==0)
    return 0;
    else if(y==1) {
        a[x][y]=1; }
    else if(y==3) {
        if(a[i][j]==0)
        for(i=0;i<=x/5;i++) {
            a[x][y]=a[x][y]+g(k,y-1);
            k=k+5; } }
     else if(y==2) {
        if(a[i][j]==0)
        for(i=0;i<=x/3) {
            a[x][y]=a[x][y]+g(k,y-1);
            k=k+3; } }
    return a[x][y]; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",g(n,3));
    return 0; }