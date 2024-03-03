#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,t1,t2,n;
    scanf("%d%d",&n,&t2);
   t1=1,t2=6;
    for(i=1;i<=n;i++) {
        for(j=t1;j<=t2;j=j+1) {
        if(j>9) {
            j=j%10;
        }printf("%d",j);
        t1=t1+1;
        t2=t2+3; }
       printf("\n"); }
	return 0; }