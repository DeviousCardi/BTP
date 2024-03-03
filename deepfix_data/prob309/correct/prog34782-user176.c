#include <stdio.h>
int main() {
    int n,i,c,k,j;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<(2*n);i++) {
        a[i]=getchar(); }
    k=0;
    for(i=0;i<=2*n-4;i=i+2) {
        c=1;
        for(j=i+2;j<=2*n-2;j=j+2) {
            if(a[i]==a[j]) {
                c=c+1; } }
        printf("%d\n",c);
        if(c==a[i]) {
            continue; }
        else {
            printf("No");
            k=1;
            break; } }
    if(k==0) {
        printf("Yes"); }
    return 0; }