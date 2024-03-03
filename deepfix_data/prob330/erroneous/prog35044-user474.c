#include <stdio.h>
int main(){
    int n;
    int a[100];
    int i;
    int flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",a[i]); }
    for(i=1;i<n;i++) {
        if(a[i]>a[i+1]&&a[i]>a[i-1]) {
        flag++; } }
    printf("%d",flag);
    return 0; }
    return 0; }