#include <stdio.h>
int main() {
    int n,d,j,i;
    scanf("%d %d\n",&d,&n);
    int a[n],b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    for(i=0;i<n;i++) {
        if(i<d) {
            a[i]=b[i]; } }
   for(i=d;i<=n;i++)
    {int t=0;
        for(j=1;j<d;j++) {
            t=a[i-j]+t; }
        a[i]=t;
            printf("%d",a[i]); }
	return 0; }