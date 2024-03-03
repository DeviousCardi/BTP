#include<stdio.h>
int main() {
    int n,a[500],i,j,d,k,l=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        k=a[i];d=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>k) {
                d++;
                k=a[j]; } }
        if(d>=l)
        l=d; }
    if(l>0)
    printf("%d",l+1);
    else
    printf("%d",l);
    return 0; }