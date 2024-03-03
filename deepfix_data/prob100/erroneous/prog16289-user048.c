#include<stdio.h>
#include<limits.h>
int maximum(int a[n]) {
    int i,max=INT_MIN;
    for(i=0;i<n;i++) {
        if(a[i]>max) {
            max=a[i]; } }
    return max; }
int main() {
    int m,n,i,j,Max2;
    scanf("%d%d",&n,&m);
    int a[n],Max1[m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[j]) }
        Max1[i]=maximum(a) }
    Max2=maximum(Max1);
    printf("%d",Max2);
    return 0; }