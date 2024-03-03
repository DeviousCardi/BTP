#include <stdio.h>
int main() {
	int n,d,i,s,k,l;
	int b[d],a[l];
	scanf("%d %d\n",&d,&n);
	for(i=1;i<=d;i++) {
	    scanf("%d",&b[i-1]);
	    a[l]=b[i-1]; }
       for(k=1;k<=d-1;k++) {
             s=b[0]+b[k];
             b[0]=s; }
            a[d]==s;
            for(k=1;k<=(n-d);k++) {
                a[d+k]=s+a[d+k-1]-a[k-1];
                s=a[d+k]; }
             printf("%d",s);
	return 0; }