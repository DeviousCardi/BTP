#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n+1];
    a[0]=1;
    for (i=1 ; i<n+1 ; i++) {
        scanf("%d",&a[i]); }
    i=0;
    int m,c[500];
    int j, k=0;
    m=a[1];
    int h;
    i++;
    int t=i;
    m = a[m];
    c[i]=m;
    for(j=0 ; j<i+1 ; j++) {
            if (m==c[i]) {
                k++;
                break; } }
         m = a[m];
    c[i]=m;
    for(j=0 ; j<i+1 ; j++) {
            if (m==c[i]) {
                k++;
                break; } }
         m = a[m];
    printf("%d",m);
    return 0; }