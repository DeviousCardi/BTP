#include <stdio.h>
int main() {
    int m,i,j,c,t,n;
    scanf("%d",&m);
    n=2*m;
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    b[i]=100000;
    for(i=0;i<n;i++) {
        c=0;t=0;
        for(j=i+1;j<n;j++) {
            c++;
            if(a[i]==a[j])
            break;
            if(a[i]!=a[j]&&j==n-1)
            {t=1;break;} }
        if(t==1)
        continue;
        else
        b[i]=c; }
    for(i=0;i<n;i++) {
        for(j=i;j<n-1;j++) {
            if(a[j]>a[j+1])
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=a[j]; } }
    printf("%d",&b);
    return 0; }