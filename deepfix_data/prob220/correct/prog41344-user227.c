#include <stdio.h>
#include <stdlib.h>
void spa(int a)
{int v;
for(v=0;v<a;v++)
printf(" ");}
int main() {
	int h,i,j,n=0,s=0;
	scanf("%d",&h);
	for(i=0;i<h;i++)
	{if(i>1)
	 n++;
	 if(i<h)
	 {for(j=1;j<=2;j++)
	 {if(j==1)
	 {spa(4-j-n);
	 printf("*");}
	 else
	 {spa(4+j-1+n);
	 printf("*");}
	 }}
	 printf("\n");
	 if(i==h)
	 {for(s=0;s<=2*h-1;s++)
	 printf("*");} }
	return 0; }