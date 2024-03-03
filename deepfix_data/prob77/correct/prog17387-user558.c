#include <stdio.h>
int main() {
    int a[5],i,M=0,m=0;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++) {
        if(a[i]>M)
        M=a[i]; }
    for(i=0;i<5;i++) {
        if(a[i]<m)
        m=a[i]; }
    M=M+m;
    m=M-m;
    M=M-m;
    for(i=0;i<5;i++) {
        printf("\t %d",a[i]); }
    printf("end");
    return 0; }