#include <stdio.h>
#include<stdlib.h>
int main() {
    unsigned int n,m,x,y,i,j,*a,*b,*c,*d,k=0;
    scanf("%u %u %u %u",&n,&m,&x,&y);
    a=(unsigned int*)malloc(n*sizeof(unsigned int));
    b=(unsigned int*)malloc(m*sizeof(unsigned int));
    c=(unsigned int*)malloc(n*sizeof(unsigned int));
    d=(unsigned int*)malloc(m*sizeof(unsigned int));
    for(i=0;i<n;i++) {
        scanf("%u",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%u",&b[i]); }
    for(i=0;i<n;i++) {
    printf("%u,%u\n",a[i]-x,a[i]+y); }
    for(i=0;i<m;i++) {
        printf("%u\n",b[i]); }
    free(d);
    free(c);
    free(b);
    free(a);
    return 0; }