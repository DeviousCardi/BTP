#include <stdio.h>
int main(){
    int n,i,j,x;
    scanf("%d", &n);
    int a[n];
    int b[100];
    int l = 0;
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    i=1;
    j=0;
    int count = 0 ;
    while(count < 6 ) {
        b[j] = i;
        i = a[i-1];
        printf("%d\n", b[j]);
        count = count + 1; }
    return 0; }