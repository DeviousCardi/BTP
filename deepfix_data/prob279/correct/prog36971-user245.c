#include <stdio.h>
int main() {
    int a[100],n,i,c=0,j,t=0,k=0,l=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++) {
        c=0;
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            c++; }
        if(c==2)
        l=a[i]; }
    for(i=1;i<=n;i++)
    {   t=0;
        for(j=0;j<n;j++) {
            if(i==a[j])
            t=1; }
        if(t==0)
        k=i; }
    printf("%d\n",l);
    printf("%d",k);
    return 0; }