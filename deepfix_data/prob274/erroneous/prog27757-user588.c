#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (i=0 ; i<n ; i++) {
        scanf("%d",&a[i]); }
    i=1;
    int m;
    int k=0;
    m=a[0];
    while(i<500) {
        c[i]=m;
        m=a[m];
         for(j=0 ; j<i+1 ; j++) {
            if (m==c[i]) {
                k++;
                break; } }
        i++; }
    return 0; }