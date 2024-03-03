#include<stdio.h>
int count(int a[],int size) {
    int i,k,j,c[size],x=0;
    for(i=0;i<size;i++) {
        k=a[i];
        for(j=0;j<size;j++) {
            if(k<=a[j]) {
                k=a[j];
                x++; } }
        c[i]=x;
        x=0; }
    x=c[0];
    for(i=0;i<size;i++) {
        if(x<c[i])
            x=c[i]; }
    printf("%d",x); }
int main() {
    int n,i;
    scanf("%d",&n);
    int s[n+2];
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    count(s,n);
    return 0; }