#include <stdio.h>
int main() {
    int n,m=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int i,count=0;
    for(i=2;i<n;i++) {
        if (n%i ==0)
        count = count +1; }
    if ( count ==m) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }