#include <stdio.h>
int main(){
    int n,k,i,j,b,x=0;
    scanf("%d",&n);
     int a[n];
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        a[i]=i+1; }
    for(i=0;i<n;i++) {
        b=k-a[i];
        for(j=0;j<n;j++) {
            if(b==a[j])
            x=2; } }
    if(x==1)
    printf("unlucky");
    if(x==2)
    printf("lucky");
    return 0; }