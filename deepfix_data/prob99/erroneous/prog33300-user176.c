#include<stdio.h>
int main() {
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        c=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                c=c+1; } }
        b[i]=c;
        printf("%d\n",b[i]); }
    return 0; }