#include <stdio.h>
#include <stdlib.h>
int acker(int m, int n) {
    if(m==0)
    return (n+1);
    if(m>0 && n==0)
    acker(m-1,1);
    if(m>0 && n>0)
    acker(m-1,acker(m,n-1)); }
int main() {
	int k,m,n;
	scanf("%d",&k);
	for(m=0,n=0;m<=3,n<=5;m++,n++) {
	       if(k==acker(m,n)){printf("%d %d",m,n);break;}
	         if(k<acker(m,n) || k<=0){printf("-1");break;} }
	return 0; }