#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
        {   int x;
            scanf("%d ",&x);
            if(((i==j)&&(x==1))&&((i!=j)&&(x==0))) {
                printf("yes"); }
            else {
                printf("no"); } } }
    return 0; }