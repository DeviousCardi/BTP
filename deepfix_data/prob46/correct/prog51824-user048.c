#include <stdio.h>
int main() {
    int m,n,c=0,i;
    scanf("%d%d",&m,&n);
    for(i=2;i<n/2;i++) {
        if(n%i==0) {
            c=c+1; } }
    if(c==m) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }