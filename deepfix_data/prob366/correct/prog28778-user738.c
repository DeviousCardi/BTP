#include <stdio.h>
int main(){
    int n;
    int a[1000],temp,i,j,k,b[1000];
    a[0]=0;
    for(i=1;i<=2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n-1;i++) {
        for(j=i+1;j<=n;j++) {
            if(a[j]==a[i])
            b[i]=j-i; } }
    for(k=1;k<i;k++) {
        if(a[k]>a[k+1])
        temp=b[i];
        b[i]=b[j];
        b[j]=temp; }
    printf("%d",temp);
    return 0; }