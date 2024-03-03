#include <stdio.h>
int main() {
    int i ,n, t,c,j;
    scanf("%d",&n);
    int a[2*n],b[2*n];
    for(i=0;i<n+n;i++)
    b[i]=0;
    for(i=0;i<n+n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        c=0;t=0;
        for(j=i+1;j<2*n;j++) {
            if(a[i]!=a[j]) {
                c++;
                if(j==n-1)
                {t=1;break;} }
            if(a[i]==a[j])
            {c++;
            break;} }
        if(t==0)
        b[i]=c;
        if(t==1)
        b[i]=1000000;
        printf("%d  ",c); }
    for(i=0;i<2*n;i++) {
        for(j=0;j<2*n-1;j++) {
            if(b[j]>b[j+1])
            t=b[j];
            b[j]=b[j+1];
            b[j+1]=t; } }
    printf("%d ",b[0]);
    return 0; }