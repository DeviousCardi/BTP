#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    char a[2*n],b[n];
    int c[26];
    scanf("%s",a);
    for(i=0;i<n;i++) {
        if((i%2)!=0) {
            b[i]=a[i]; } }
    printf("%s",b);
return 0; }