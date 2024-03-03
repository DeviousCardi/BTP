#include <stdio.h>
int main(){
    int m,n,i,c;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++) {
        if(i!=1 && n%i==0) {
            c++; }
        else {
            c=0; } }
    if(c==n) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }