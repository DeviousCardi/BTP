#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int hanoi(int k) {
      if(k==0)
        return 0;
      return (2*hanoi(k-1)+1); }
int t,n,i,x,flag=0;
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&n);
    for(x=0;x<25;x++) {
        if(n==hanoi(x))
        {printf("yes\n");
        flag=1;
        break;}
        else continue; }
    if(flag==0)
    printf("no\n");
    flag=0; }
	return 0; }