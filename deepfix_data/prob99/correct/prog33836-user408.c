#include<stdio.h>
int main() {
    int n,*a,i;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int len =sizeof(a)/sizeof(int);
    printf("%d",len);
    return 0; }