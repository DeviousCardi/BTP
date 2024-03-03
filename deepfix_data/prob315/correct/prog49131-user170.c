#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,tmp,j,k,d=0,f=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[n]); }
    for(j=0;j<n;j++) {
     for(k=n-1;k>j;k--) {
         if(a[j]>a[k]) {
             d++; } } }
    printf("%d\n",d);
    for(j=0;j<n;j++) {
        for(k=n-1;k>j;k--) {
            if(a[j]>a[k]) {
                f=f+1; } }
        printf(" %d",f);
        f=0; }
	return 0; }