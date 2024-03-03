#include <stdio.h>
int main(){
    int a[n+1];
    int b[n*n];
    int i,j,k,t,count;
    a[0]=1;
    b[0]=1;
    count=0;
    for(i=1;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n*n,i++) {
        b[i]=a[a[i-1]];
        for(j=0;j<i;j++) {
            if(b[j]=b[i]&&count==0) {
                printf("%d",i);
                count++; }
            else if(b[j]=b[i]) {
                count++; } } }
    return 0; }