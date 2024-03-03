#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[100];
    scanf("%d",&a[100]);
    int i;
    int count;
    for(i=0;i<=98;i++) {
    if(a[i+1]>=a[i+2] && a[i+1]>=a[i]) {
        printf("%d",count); }
    count=count+1; }
    return 0; }