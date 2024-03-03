#include <stdio.h>
int main(){
    int a[300];
    int n,pos,i,k;
    a[0]=52;
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        scanf("%d",&a[0]);
    }for(i = 0;i<n;i++){
        scanf("%d",&a[i+n]);
    }for(i = 0;i<n;i++){
          k = a[n+i];
          a[2*n+k] = a[n+i]; }
    for(i= 0 ;i<n;i++){
        printf("%d ",a[2*n+i]); }
    printf("end");
    return 0; }