#include <stdio.h>
int main() {
    int a[101],b[100],n,count=2,count2=0,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); } {
        if(a[0]!=a[i] && a[i]!=1)
        count=count+1; }
    printf("%d %d",count-count2,count-1-count2);
    return 0; }