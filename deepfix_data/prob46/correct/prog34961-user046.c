#include <stdio.h>
int main(){
    int n,m;
    int c=0;
    scanf("%d%d",&m,&n);
    for(int i=2;i<n;i++) {
        if((n%i)==0)
        c++; }
    if(c==m) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }