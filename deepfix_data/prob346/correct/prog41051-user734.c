#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;i<=99;i++) {
        for(i=0;i<n;i++){
            if(a[i]==j)
            printf("%d",a[i]); } }
    printf("end");
    return 0; }