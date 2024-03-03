#include <stdio.h>
int main() {
	int n,d,i,s,k;
	int b[d],a[1001];
	scanf("%d %d\n",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    a[i]=b[i]; }
       for(k=1;k<=d-1;k++) {
             s=b[0]+b[k];
             b[0]=s; }
            a[d]=s;
            for(k=1;k<=(n-d);k++) {
                a[d+k]=s+a[d+k-1]-a[k-1];
                s=a[d+k]; }
             printf("%d",s);
	return 0; }