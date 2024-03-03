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
        sum1=sum1+a[i];
        a[i]=c[i];
        b[n-1-i]=c[i]; }
    for(i=1;i<=sum1;i++) {
        if(a[k1]==i) {
            printf("%da %d\n",a[k1],i);
            k1++; }
        else if(b[k2]==i) {
            printf("%db %d\n",b[k2],i);
            k2++; }
        else if((sum(k1,a)==sum(k2,b))&&sum(k1,a)!=0&&sum(k2,b)!=0&&(k1+k2)!=n-2) {
            k1++;
            break; }
        else if(k1+k2==n-2) {
            printf("n\n");
            break; } }
    printf("%d %d",k1,k2);
	return 0; }