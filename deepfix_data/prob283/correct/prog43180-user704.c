#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n)
{      if(m==0)return n+1;
       else if(n==0)return ack(m-1,n);
       else if(m>0&&n>0)return ack(m-1,ack(m,n-1));
       else return 0; }
    int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{ for(j=0;j<6;j++)
	   if(ack(i,j)==n){printf("%d %d",i,j);break;} }
	printf("%d",ack(2,3));
	return 0; }