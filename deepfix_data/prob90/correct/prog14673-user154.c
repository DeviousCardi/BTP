#include <stdio.h>
int main(){
    int a[1000],c[500];
    int k,n,i,j,l,o,r=0,f;
       scanf("%d\n%d\n", &k,&n);
    for (i=0;i<n;i++) {
          scanf("%d", &a[i]); }
    for (f=0;f<500;f++) {
          c[f]=0; }
    for(j=0;j<n;j++) {
        l=a[j];
        c[l]=1; }
    for (i=0;i<500;i++) {
        if (c[i]==1) {
            if (c[k-i]==1)
            r++; } }
    if (r>0)
     printf("lucky");
    else
     printf("unlucky"); }