#include <stdio.h>
int main(){
    int n,t,k,i,j;
    scanf("%d",&n);
    int a[n],b[n],c[t];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(k=0;k<n;k++){
        t=b[k];
        c[t]=a[k];
        printf("%d" ,c[t]); }
    printf("end");
    return 0; }