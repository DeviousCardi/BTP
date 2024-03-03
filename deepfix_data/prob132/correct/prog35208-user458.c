#include <stdio.h>
int main() {
    int n,i,l,k=0;
    scanf("%d\n",&n);
    char a[2*n],b[n];
    int c[26];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++) {
        if((i%2)==0) {
            b[k]=a[i];
            k++; } }
    printf("%s",b);
return 0; }