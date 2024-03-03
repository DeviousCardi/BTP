#include <stdio.h>
int main(){
    int books[300];
    int n,pos,i,k;
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i = 0;i<n;i++){
        scanf("%d",&a[i+n]);
    }for(i = 0;i<n;i++){
          k = a[n+i];
          a[2n+k] = a[n+i]; }
    for(i= 0 ;i<n;i++){
        printf("%d ",&a[2n+i]); }
    printf("end");
    return 0; }