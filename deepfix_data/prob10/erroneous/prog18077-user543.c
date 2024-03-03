#include<stdio.h>
int main() {
    int i,j,max=1,n;
    scanf("%d\n",&n);
    int a[n];
        for(i=o;i<n;i++)
            scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n-i;j++) {
            if(a[i+j]>a[i])
             max++; } }
printf("%d",max);
    return 0; }