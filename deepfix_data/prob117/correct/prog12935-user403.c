#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C)
{  x=x+1;
    if(n==1)
 return x;
tower(n-1,A,C,B);
tower(n-1,C,B,A) ; }
int main()
{ int a[25],t,i,j=1,k,y=0;
char A,B,C;
scanf("%d\n",&t);
a[0]=0;
while(j>0,j<=25) {
    a[j]=tower(j,A,B,C);
    j++; }
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        for(j=1;j<=25;j++)
        {   a[j]=a[j]-a[j-1];
            if (k==a[j]);printf("%d\n",a[j]); } }
	return 0; }