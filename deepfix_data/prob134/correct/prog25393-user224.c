#include <stdio.h>
#include <stdlib.h>
int B(int x,int y) {
if(x<y)
 return 0;
else if((x==0)&&(y==0))
 return 1;
else if(y==0)
 return 1;
else
 return B(x-1,y)+B(x-1,y-1); }
int main()
{int b,i,j;
scanf("%d",&b);
for(i=0;i<20;i++) {
for(j=0;j<20;j++)
 { if(b==B(i,j))
 { printf("%d %d",i,j);
 break;} } }
printf("-1");
	return 0; }