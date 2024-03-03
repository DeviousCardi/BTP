#include <stdio.h>
int main(){
    int n,a[10000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<100;j++) {
        for(i=0;i<n;i++) {
            if(a[i]==j) {
                printf("%d ",a[i]); } } }
    printf("end");
    return 0; }