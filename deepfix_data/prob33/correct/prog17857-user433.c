#include <stdio.h>
int main() {
    int h,i,j,p,k;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d",&j);
    for(i=1;i<=p-1;i++) {
        scanf("%d",&k);
        if(k<j) {
            h=h-(j-k);
            j=k; }
        else
        j=k; }
    if(h>0)
    printf("Yes");
    else
    printf("No");
    return 0; }