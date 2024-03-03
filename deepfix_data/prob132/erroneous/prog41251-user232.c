#include <stdio.h>
int main() {
    int n,m,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d,",&a[i]);
    m=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]=b[j])
            break; }
        count=1;
        b[m]=a[i];
        m++;
        for(j=i+1;j<n;j++) {
            if(a[j]=a[i]) {
                count++;
                b[m]=a[j];
                m++; } }
        if(count!=a[i]) {
            printf("No");
            break; } }
    if(m==n)
        printf("Yes"); }