#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,count=0;
    long int *ap,*bp;
    long int n,m,x,y,a[100001],b[100001];
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%ld",&b[i]); }
    ap=a;
    bp=b;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            if(*bp>=*ap-x&&*bp<=*ap+y) {
                printf("%d %d",j+1,i+1);
                bp++;
                ap++;
                count++; }
            else
            *bp++; } }
	return 0; }