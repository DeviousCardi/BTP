#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,a,b,c,k=0,l;
   scanf("%d%d",&a,&b);
  l=a;
   for(i=0;i<a;i++) {
       k=i+1;
     for(j=1;j<=b-a+i+1;j++) {
       if(j<l) {
       printf(" "); }
     else if(k>9)
     {c=k%10; printf("%d",c); }
     else
      printf("%d",k);
      k=k+1; }
       l=l-1;
       printf("\n"); }
	return 0; }