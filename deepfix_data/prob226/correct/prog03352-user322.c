#include <stdio.h>
int s(int i,int b[],int d,int a){
    if(0<=i<d)
    return b[i];
    if(i==d)
    return a; }
int main() {
 int d,n,b[20],i,a;
 scanf("%d %d\n",&d,&n);
 for(i=0;i<d;i++)
 scanf("%d",&b[i]);
  a=0;
 for(i=0;i<d;i++)
  a=a+b[i];
 printf("%d",s(n,b,d,a));
	return 0; }