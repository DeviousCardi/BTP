#include <stdio.h>
int main() {
    int d,N,i;
    scanf("%d %d\n",&d,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]);
        printf("%d",b[i]); }
    int a[N+1];
    int j;
    int m;
            int k;
            m=0;
    for(j=0;j<=N;j++) {
        m=0;
        if(d>j) {
            a[j]=b[j]; }
        else if(d<=j) {
            for(k=1;k<=d;k++) {
                m=m+a[j-k]; }
            a[j]=m; } }
    printf("%d",a[N]);
	return 0; }