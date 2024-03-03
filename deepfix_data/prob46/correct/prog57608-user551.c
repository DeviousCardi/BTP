#include <stdio.h>
int main(){
    int m,n,i,c=0;
    scanf("%d %d",&m,&n);
    for(i=2;i<=(n/2);i++) {
        if(n%i==0) {
            c++; } }
    if(c==m) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }