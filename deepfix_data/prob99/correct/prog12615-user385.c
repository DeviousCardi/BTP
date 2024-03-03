#include<stdio.h>
int main() {
    int n,i=0,j,k=0,p=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    while(i<n)
    {   k=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                k++;
                a[i]=a[j]; } }
        b[p]=k+1;
        p++; }
    int m=b[0];
    for(i=0;i<n;i++) {
        if(m<b[i]) {
            m=b[i]; } }
    printf("%d",m);
    return 0; }