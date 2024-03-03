#include <stdio.h>
int main() {
    int h,i,j,p,k;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&j);
    for(i=1;i<=p-1;i++) {
        scanf("%d",&k);
        if(k<j) {
            h=h-(j-k);
            j=k; } } }