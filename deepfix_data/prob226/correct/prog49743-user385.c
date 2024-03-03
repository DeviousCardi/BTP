#include <stdio.h>
int main() {
    int a[30],b[20];
    int d,n,i,j,s=0;
    scanf("%d %d",&d,&n);
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    for(i=n-1;i>=n-d;i--) {
        for(j=0;j<=i;j++) {
            s=s+b[j]; } }
	return 0; }