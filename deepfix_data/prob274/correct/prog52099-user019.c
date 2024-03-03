#include <stdio.h>
int main(){
    int i,m,n,k,j=0,t=0,a[100],b[100];
    scanf("%d",&n);
    a[0]=1;
    b[0]=1;
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]);
        b[i]=n+i; }
    for(i=1;i<n;i++) {
        for(j=0;j<i;j++) {
            if(a[i]==a[j])
            m=1; }
        if(m==0) {
        b[t+1]=a[i];
        t++; }
        if(i==(n-1))
        i=1; }
    printf("%d %d",t,t-1);
    return 0; }