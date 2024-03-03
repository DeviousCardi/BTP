#include <stdio.h>
int main() {
    int a[5],i,m=0;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++) {
        if(a[i]>m)
        m=a[i]; }
    printf("%d",m);
    printf("end");
    return 0; }