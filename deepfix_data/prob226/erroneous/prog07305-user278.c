#include <stdio.h>
int main() {
	int N,d,i,j,sum=0;
	int a[30],b[20];
	scanf("%d %d\n",&d,&N);
	for(i=0;i<d;i++) {
	    scanf("%d ",&a[i]); }
	if(N<d) {
	    printf("%d",a[N]); }
	else {
	    for(j=d;j<=N;j++) {
	        for(k=j-1;k>=j-d;k--) {
	            sum=sum+a[k]; }
	        a[j]=sum;
	        sum=0; }
	    printf("%d",a[N]); }
	return 0; }