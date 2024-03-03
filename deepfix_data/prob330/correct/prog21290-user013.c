#include <stdio.h>
int main(){
    int n;
    int a[100];
    scanf("%d\n",&n);
    int i;
    int count=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        i>=2;
    if(a[i-1]>=a[i-2] && a[i-1]>=a[i]) {
        count=count+1; } }
    printf("%d",count);
    return 0; }