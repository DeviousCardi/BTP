#include <stdio.h>
int main() {
    int b,i;
    scanf("%d",&b);
    int a[b];
    scanf("%d",&a[0]);
    for(i=1;i<b;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<b;i++)
    printf("%d",a[i]);
    printf("end");
    return 0; }