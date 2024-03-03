#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int hanoi(int k) {
      return (pow(2,k)-1); }
int t,n,i;
scanf("%d",&t);
for(i=0;i<n;i++) {
    scanf("%d",&n);
    for(x=0;x<100;x++) {
        if(n==hanoi(x))
        {flag=1;
            printf("yes");
        break;}
        else continue; }
    if(flag==0)
    {printf("no");
    flag=0}
	return 0; }