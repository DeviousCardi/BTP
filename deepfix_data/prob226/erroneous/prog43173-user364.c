#include <stdio.h>
int main() {
    int n,i,m,sum;
    int a[50];
    sum=0;
    scanf("%d %d \n",&n,&m);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    if(m>=n) {
        for(i=(m-n);i<m;i++) {
       a[i+1]=a[i]+a[i+1]; } }
	if(m==0){printf("%d",a[0]);
	else{printf("%d",a[m-1]);}
	return 0; }