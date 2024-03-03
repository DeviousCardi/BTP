#include <stdio.h>
#include <stdlib.h>
int binomial(int a,int b){
    if (a<b)
    return 0;
    else
    if (a==0&&b==0)
    return 1;
    else
    if (a>0&&b==0)
    return 1;
    else
    return (binomial(a-1,b)+binomial(a-1,b-1)); }
int main() {
 int i,j,n,a=0,b=0;
 scanf ("%d",&n);
 for (i=0;i<=40;i++){
     for (j=0;j<=i;j++)
     if (binomial(i,j)==n)
     a=i;
     b=j;
     break; }
 printf ("%d %d",a,b);
	return 0; }