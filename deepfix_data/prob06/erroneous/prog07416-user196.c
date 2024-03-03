#include <stdio.h>
#include<stdlib.h>
int main() {
    unsigned long int n,m,x,y,i,j,*a,*b,*c,*d,k=0;
    scanf("%lu %lu %lu %lu",&n,&m,&x,&y);
    a=(unsigned long int*)malloc(n*sizeof(unsigned long int));
    b=(unsigned long int*)malloc(m*sizeof(unsigned long int));
    c=(unsigned long int*)malloc(n*sizeof(unsigned long int));
    d=(unsigned long int*)malloc(m*sizeof(unsigned long int));
    for(i=0;i<n;i++) {
        scanf("%lu",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%lu",&b[i]); }
   for(i=0;i<n;i++) {
       printf("%lu,%lu ",a[i],b[i]) }
    free(d);
    free(c);
    free(b);
    free(a);
    return 0; }