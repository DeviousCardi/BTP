#include <stdio.h>
#include <stdlib.h>
int sum(int k,int a[]) {
    int i,sum1=0;
    for(i=0;i<k;i++) {
        sum1=sum1+a[i]; }
    printf("%d\n",sum1);
    return sum1; }
int main() {
    int i,sum1=0,n,k1=0,k2=0;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++) {
        scanf("%d",&c[i]);
        sum1=sum1+a[i];
        a[i]=c[i];
        b[n-1-i]=c[i]; }
    for(i=0;i<n;i++) { }
    for(i=1;i<=sum1;i++) {
        if(a[k1]==i) {
            k1++; }
        else if(b[k2]==i) {
            k2++; }
        else if(sum(k1,a)==sum(k2,b)) {
            printf("n\n");
             printf("%di\n",i);
            k1++;
            break; }
        else if(k1+k2==n-2) {
            break; } }
    printf("%d %d",k1,k2);
	return 0; }