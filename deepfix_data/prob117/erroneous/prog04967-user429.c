#include <stdio.h>
#include <stdlib.h>
int hanoi(n) {
    if(n==0)
      return 1;
     else if(n==1)
     return 2;
     else
     return (2*hanoi(n-1)); }
int main() {
    int t,i,n,j;
    int x;
    scanf("%d",&t);
    for(i=1;i<t;i++) {
        scanf("%d",&n);
        for(j=0;k>=hanoi(j)-1;j++) {
            if(hanoi(j)-1==k)
            printf("yes");
            else
            printf("no"); } }
	return 0; }