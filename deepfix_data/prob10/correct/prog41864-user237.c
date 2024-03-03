#include<stdio.h>
int main() {
    int n,m,i,j,c=1;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {   m=a[i];
        for(j=i+1;j<n;j++) {
            if(a[j]>m) {
                m=a[j];
                c++; } }
        b[i]=c;
        c=1; }
    m=b[0];
    for(i=1;i<n;i++) {
        if(b[i]>m)
        m=b[i]; }
    printf("%d",m);
    return 0; }