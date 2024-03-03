#include <stdio.h>
#include <stdlib.h>
int isprime(int a)
 {int i,e=0;
  for(i=2;i<=a/2;i++) {
      if(a%i==0)
      {e=1;
       break; } }
  if(e==0)
  return 1;
  else
  return -1; }
int main() {
             int a,i,sum=1;
             scanf("%d",&a);
             for(i=2;i<=a;i++) {
                 if((isprime(i)==1)&&(a%i==0))
                 sum=sum+i; }
             if(sum==a)
              printf("YES");
             else
             printf("NO");
	return 0; }