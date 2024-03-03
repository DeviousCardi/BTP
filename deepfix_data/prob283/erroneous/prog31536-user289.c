#include <stdio.h>
#include <stdlib.h>
int akerman(intm,intn) {
if(m==0)
return n+1;
if(m>0&&n==0)
return Akerman(m-1,1);
if(m>0&&n>0) }
return Akerman(m-1,akerman(m,n-1));
int main() {
    int k,result;
    scanf("%d"&k);
    for(i=3;i>=0;i--)
    {for(j=5;j>=0;j--)
    {result=akerman(i,j);
        if(result==k)
     printf("%d %d",i,j);
    }}
	return 0; }