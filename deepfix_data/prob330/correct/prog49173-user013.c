#include <stdio.h>
int main(){
    int n;
    int a[10];
    scanf("%d\n",&n);
    int i;
    int count;
    for(i=0;i<=9;i++) {
        scanf("%d",&a[i]);
    if(a[i+1]>=a[i+2] && a[i+1]>=a[i]) {
        count++; } }
    printf("%d",count);
    return 0; }