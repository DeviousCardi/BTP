#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C)
{x++;
    if(n==1)
  return  x;
  tower(n-1,A,B,C);
 tower(n-1,B,C,A);
   return 1; }
int main()
{ int t,i,a,k,y;
char A,B,C;
scanf("%d\n",&t);
for(i=1;i<=t;i++) {
    scanf("%d\n",&k);
    for(a=1;a<=20;a++) {
        y=tower(a,A,B,C);
       if(k<0 || k<y){printf("%d\n",y);break;}
       if(k==y){printf("%d\n",y);break;} }
}    printf("%d",tower(2,A,B,C));
	return 0; }