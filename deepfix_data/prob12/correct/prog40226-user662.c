#include <stdio.h>
int main() {
    int n=0,i,j,l=1000;
    int  a[2*n];
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]);
    }for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                 if((j-i)<l) {
                    l=j-i; } } } }
        printf("%d",l);
    return 0; }