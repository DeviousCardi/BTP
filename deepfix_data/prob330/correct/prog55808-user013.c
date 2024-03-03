#include <stdio.h>
int main(){
    int n;
    int a[100];
    scanf("%d\n",&n);
    int i;
    int count;
    for(i=0;i<=99;i++) {
        scanf("%d",&a[i]);
    if(a[i+1]>=a[i+2] && a[i+1]>=a[i]) {
        count=count+1; } }
    printf("%d",count-4200480);
    return 0; }