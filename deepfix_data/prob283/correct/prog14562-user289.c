#include <stdio.h>
#include <stdlib.h>
int akerman(int m,int n) {
if(m==0)
return n+1;
if((m>0)&&(n==0))
return akerman(m-1,1);
if(m>0&&n>0)
return akerman(m-1,akerman(m,n-1));
else
return -1; }
int main() {
    int k,result,i,j,a=10,b=10,l=0;
    scanf("%d",&k);
    for(i=3;i>=0;i--)
    {for(j=5;j>=0;j--)
    {result=akerman(i,j);
        if(result==k)
     {a=j;
     b=i;}
}}   if(a==10&&b==10)
      printf("-1");
      else
    printf("%d %d",b,a);
	return 0; }