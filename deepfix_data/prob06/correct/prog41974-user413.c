#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,count=0,count1=0;
    long int n,m,x,y,a[100001],b[100001];
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    int c[n],d[n];
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<m;i++)
        scanf("%ld",&b[i]);
    i=0;
    while(i<n) {
        for(j=count1;j<m;j++) {
            if(b[j]>=(a[i]-x)&&b[j]<=(a[i]+y)) {
                count++;count1++;
                c[i]=i+1;
                d[i]=j+1;
                break; } }
        i++; }
    printf("%d\n",count);
    for(i=0;i<n;i++) {
        if(c[i]!=0&&d[i]!=0)
            printf("%d %d\n",c[i],d[i]); }
	return 0; }