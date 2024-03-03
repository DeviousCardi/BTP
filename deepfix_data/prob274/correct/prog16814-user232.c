#include <stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    c=n*n;
    int a[n+1];
    int b[c];
    int i,j,t,count;
    a[0]=1;
    b[0]=1;
    count=0;
    for(t=1;t<n;t++)
    scanf("%d",&a[t]);
    for(i=1;i<c;i++) {
        b[i]=a[a[i-1]];
        for(j=0;j<i;j++) {
            if(b[j]==b[i]) {
                printf("%d",i);
                count++; }
            else if(b[j]==b[i]) {
                count++; } } }
    return 0; }