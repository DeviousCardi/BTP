#include <stdio.h>
int a[1000];
int sum(int m,int n) {
    int i,sum=0;
    for(i=m;i<=n;i++)
        sum+=a[i];
    printf("%d\n",sum);
    return sum; }
int main() {
    a[0]=1;
    int i,j,k,t;
	for(i=0;i<100;i++) {
	    a[0]=sum(0,i);
	    for(j=1;j<=i+1;j++)
	        a[j]=sum(j-1,i); }
	scanf("%d",&t);
	for(i=0;i<100;i++)
	    printf("%d",a[i]);
	while(t--) {
	    i=0;
	    scanf("%d",&k);
	    while(a[i++]<=k);
	    printf("%d",a[i-1]); }
	return 0; }