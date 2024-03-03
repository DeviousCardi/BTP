#include <stdio.h>
#include <stdlib.h>
long long acker(int m , int n) {
    if (m==0)
        return n+1;
    if (m>0 && n==0)
        return acker(m-1,1);
    return acker(m-1,acker(m,n-1)); }
int main() {
	int m=-1, n=-1, i, j;
	long long k;
	scanf("%lld", &k);
	for(i=0; i<=3; i++) {
	    for(j=0; j<=5;j++) {
	        if(acker(i,j)==k) {
	            m=i;
	            n=j;
	            break; } }
	    if (m!=-1&&n!=-1)
	        break; }
	if (m!=-1&&n!=-1)
	    printf("%d %d",m ,n);
	else
	    printf("-1");
	return 0; }