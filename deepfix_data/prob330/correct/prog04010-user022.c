#include <stdio.h>
int main(){
    int n,i,count=0;
    int a[100];
    scanf("%d/n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-2;i++) {
        if((a[i+1]>a[i])&&(a[i+1]>a[i+2]))
        ++count; }
    printf("%d",count);
    return 0; }