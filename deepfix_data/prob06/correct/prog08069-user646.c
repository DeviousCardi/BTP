#include <stdio.h>
#include <stdlib.h>
int main() {
   long int n,m,y,i,x=0,j=0,k=0;
   scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
   long int a[n],b[m],c[m],d[n];
   for(i=0;i<n;i++) {
       scanf("%ld",a+i); }
    for(i=0;i<m;i++) {
        scanf("%ld",b+i); }
    for(i=0;i<m;) {
    if((b[i]>=a[j]-x)&&(b[i]<=a[j]+y)) {
            c[k]=j+1;
            d[k]=i+1;
            i++;j++;k++;
             x++; }
        else if(b[i]<a[j]-x) {
            i++; }
        else if(b[i]>a[i]+y)
        j++; }
    printf("%ld\n",x);
       for(k=0;k<x;k++)
    printf("%ld %ld\n",c[k],d[k]);
	return 0; }