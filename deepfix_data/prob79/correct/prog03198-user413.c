#include <stdio.h>
#include <stdlib.h>
int sum(int k,int a[]) {
    int i,sum1=0;
    for(i=0;i<k;i++) {
        sum1=sum1+a[i]; }
    return sum1; }
int main() {
    int i,sum1=0,n,k1=0,k2=0;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++) {
        scanf("%d",&c[i]);
        sum1=sum1+c[i];
        a[i]=c[i];
        b[n-1-i]=c[i]; }
    for(i=1;i<=sum1;i++) {
        if(sum(k1+1,a)==i) {
            k1++; }
        else if(sum(k2+1,b)==i) {
            k2++; }
        else if((sum(k1+1,a)==sum(k2+1,b))&&(k1+k2)==n-2) {
            printf("n\n");
            k1++;
            break; }
        else if(k1+k2==n-2) {
            printf("n\n");
            break; } }
    printf("%d %d",k1+1,k2+1);
	return 0; }