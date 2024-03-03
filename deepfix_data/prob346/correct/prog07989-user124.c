#include <stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i=i+1){
        scanf("%d",&a[i]); }
    for(j=0;j<=99;j=j+1){
        for(i=0;i<n;i=i+1){
            if (a[i]==j){
                printf("%d ",a[i]); } } }
    printf("end");
    return 0; }