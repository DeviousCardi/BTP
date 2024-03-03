#include <stdio.h>
int a[1000]={1};
void sum(int m,int n) {
    int i,sum=0;
    for(i=m;i<=n;i++)
        sum+=a[i];
    return sum; }
int main() {
    int i,j,t,n;
	for(i=0;i<100;i++) {
	    a[0]=sum(0,i);
	    for(j=1;j<=i+1;j++)
	        a[j]=sum(j-1,i); }
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&k);
	    for(i=0;;i++)
	        if(a[i]>k) {
	            printf("%d",i);
	            break; } }
	return 0; }