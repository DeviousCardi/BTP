#include <stdio.h>
int main() {
	int a[50],i,j,n,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[j]==a[i]) {
                d=1;
                printf("YES");
                break; } }
        if(d==1) {
            break; } }
    if(d==0) {
        printf("NO"); }
	return 0; }