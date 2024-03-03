#include <stdio.h>
int main(){
 int i,m,n,c=0;
 scanf("%d",&m);
 scanf("%d",&n);
 for(i=2;i<=n-1;n++) {
        if(n%i==0) {
            c++;
    }}
    if(c==m) {
    printf("YES"); }
    else {
        printf("NO"); }
    return 0; }