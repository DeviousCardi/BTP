#include <stdio.h>
int main() {
    int i ,n, t,c,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        c=0;t=0;
        for(j=i+1;j<n;j++) {
            if(a[i]!=a[j]) {
                c++;
                if(j==n-1)
                t=1; }
            if(a[i]==a[j])
            c++;
            break; }
        if(t==0)
        b[i]=c;
        if(t==1)
        b[i]=0; }
    for(i=0;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(a[j]>a[j+1])
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t; } }
    printf("%d",b[0]);
    return 0; }