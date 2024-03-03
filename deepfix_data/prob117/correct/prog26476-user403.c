#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C)
{ x=x+1;
    if(n==1)
  return x;
  tower(n-1,A,B,C);
 tower(n-1,B,C,A); }
int main()
{ int t,i,a,k,y;
char A,B,C;
scanf("%d\n",&t);
 for(i=0;i<t;i++) {
    scanf("%d\n",&a);
        for(k=1;k<=50;k++) {
        y=tower(k,A,B,C);
        if(a==y)
        {printf("yes\n");break;}
        if(a<y || a<=0)
        {printf("no\n");break;} }
  } printf("%d",tower(20,A,B,C));
	return 0; }