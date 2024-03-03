#include <stdio.h>
int main() {
    int d,N,i;
    scanf("%d %d",&b,&N);
    int b[d];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    int a[N];
    int j;
    for(j=0;j<N;j++) {
        if(d>j) {
            a[j]=b[i]; }
        if(d<j) {
            int m;
            int k;
            m=0;
            for(k=1;k<=d;k++) {
                m=m+a[j-k]; } } }
	return 0; }