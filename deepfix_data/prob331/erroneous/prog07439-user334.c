#include <stdio.h>
int main() {
    int i,j,n;
    int x;
    scanf("%d",&n);
    int t=1
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d ",&x);
            if((i==j)&&(x==1)) {
                continue; }
            else if((i!=j)&&(x==0)) {
                continue; }
            else {
                t=0; } } }
    if(t==1) {
        printf("yes"); }
    if(t==0) {
        printf("no"); }
    return 0; }