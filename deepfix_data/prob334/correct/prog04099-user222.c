#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,a,b,c,k;
   scanf("%d%d",&a,&b);
   for(i=0;i<a;i++) {
       k=i+1;
     for(j=1;j<=b-a+i+1;j++) {
       if(j<a) {
       printf(" "); }
     else if(k>9)
     {c=k%10; printf("%d",c); }
     else
      printf("%d",k); k++; }
       printf("\n"); }
	return 0; }