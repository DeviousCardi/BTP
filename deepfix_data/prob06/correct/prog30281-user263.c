#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j,p=0,count=0;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    int a[n];
    int b[m];
    int flag[m];
    int c[100000][2];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]);
        flag[i]=0; }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(b[j]>=a[i]-x&&b[j]<=a[j]+y) {
                printf("yes,i%d  j%d\n", i,j); } } }
	return 0; }