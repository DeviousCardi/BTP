#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j,c=0,a[1000],b[1000];
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%d",a[i]); }
    for(i=0;i<m;j++) {
        scanf("%d",b[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<m) {
        if(a[i]>=b[j]-x&&a[i]<=b[j]+y);
        c++; } }
    printf("%d",c);
	return 0; }