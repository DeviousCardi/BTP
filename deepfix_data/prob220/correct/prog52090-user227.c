#include <stdio.h>
#include <stdlib.h>
void spa(int a)
{int v;
for(v=0;v<a;v++)
printf(" ");}
int main() {
	int h,i,j,n=0,s;
	scanf("%d",&h);
	for(i=0;i<h;i++)
	{if(i>1)
	 n++;
	 if(i==1)
	 {spa(h);
	 printf("*");}
	 if(i<h&&i>1)
	 {for(j=0;j<2;j++)
	 {if(j==0)
	 {spa(4-j-n-1);
	 printf("*");}
	 else
	 {spa(4+j+n);
	 printf("*");}
	 }}
	 printf("\n");}
	 if(i==h)
	 {for(s=0;s<2*h-1;s++)
	 printf("*");}
	return 0; }