#include <stdio.h>
int main() {
    int k,n,i,p[n],a,b;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    for(i=1;i<n;i++) {
            scanf("%d",&p[i]);
            if(k==p[0]+p[i])
            break;
            else
            printf("unlucky");break; }
    printf("lucky");
    return 0; }