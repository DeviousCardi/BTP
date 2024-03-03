#include <stdio.h>
int main(){
    int n;
    int i;
    int count=0;
    int a[200];
    scanf("%d\n",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for (i=1;i<n-1;i++) {
        if (a[i]>a[i-1] &&  a[i]>a[i+1])
        {printf("%d",a[i]);
        count++;} }
    printf("%d",count);
    return 0; }