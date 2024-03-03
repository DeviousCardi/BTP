#include <stdio.h>
int main() {
    int n,i,lucky,ch,s=0;
    n=getchar();
    while(i<4) {
        s=s+n;
        n=getchar();
        i++; }
    for(i=n; ;i++) {
        if(i%s==0) {
            printf("%d",i);
            break; } }
    return 0; }