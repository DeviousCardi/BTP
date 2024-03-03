#include<stdio.h>
int main() {
    int n,a[50],sol[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",a[i]); }
    for(i=0;i<n;i++) {
        if(a[i+1]>a[i])
        break; }
    int i=k;
    sol[0]=a[k];
    for(i=k+1,j=0;i<n;i++,j++) {
        if(a[k]>sol[j])
        sol[j+1]=a[k]; }
    int count;
    int len;
    len=sizeof(sol)/sizeof(int);
    printf("%d",len);
    return 0; }