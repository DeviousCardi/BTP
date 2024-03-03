#include <stdio.h>
#include <stdlib.h>
int B(int n,int k)
{  if(n<k)
  return 0;
  else if(n==0 && k==0)
  return 1;
  else if(k==0)
  return 1;
  else
  return (B(n-1,k)+B(n-1,k-1)); }
int main() {
    int n=0,k=0,i,j,b,flag1=0;
    scanf("%d",&b);
    for(i=0; i<=20; i++) {
        for(j=0; j<=20; j++) {
                if(b==B(i,j))
                {flag1=1;
                i=n;j=k;
                printf("%d %d",n,k);
                break; } }
        if(flag1==1)
            break; }
    if (flag1==1);
    else
    printf("-1");
	return 0; }