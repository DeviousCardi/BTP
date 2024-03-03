#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,t1,t2,b,n;
    scanf("%d%d",&n,&b);
   t1=1,t2=6;
    for(i=1;i<=n;i++) {
        if(t2>b){
             break; }
        for(j=t1;j<=t2;j=j+1) {
           printf("%d",j%10); }
       t1=t1+1;
           t2=t2+3;
       printf("\n"); }
	return 0; }