#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C) {
    if(n==1)
  return  x++;
  tower(n-1,A,B,C);
 tower(n-1,B,C,A);
   return x++; }
void series(int a[])
{ int j;
char A,B,C;
    for(j=0;j<25;j++) {
    a[j]=tower(j,A,B,C); printf("%d",a[j]); } }
int main()
{ int i,a,y,k,t,x;
char A,B,C;
scanf("%d\n",&t);
for(i=1;i<=t;i++) {
    scanf("%d\n",&a);
    for(k=1;k<=20;k++)
    { y=tower(k,A,B,C);
     if(a==y){printf("%d\n",y);break;}
     if(a<0 || a<y){printf("%d\n",y);break;} } }
printf("%d",tower(2,A,B,C));
	return 0; }