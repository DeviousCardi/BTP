#include <stdio.h>
int main(){
    int m,n,i,c;
    scanf("%d %d",&m,&n);
    c=0;
    for(i=1;i<=n;i++) {
        if(i!=1&&n%i==0) {
            c++; } }
    if(c==n) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }