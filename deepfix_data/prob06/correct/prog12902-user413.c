#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,count=0,count1=0;
    long int n,m,x,y,a[100001],b[100001];
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<m;i++)
        scanf("%ld",&b[i]);
    i=0;
    while(i<n) {
        for(j=count1;j<m;j++) {
            if(b[j]>=(a[i]-x)&&b[j]<=(a[i]+y)) {
                count++;count1++;
                break; } }
        i++; }
    printf("%d\n",count);
    i=0;
    count1=0;
    while(i<n) {
        for(j=count1;j<m;j++) {
            if(b[j]>=(a[i]-x)&&b[j]<=(a[i]+y)) {
                printf("%d %d\n",i+1,j+1);
                count1++;
                break; } }
        i++; }
	return 0; }