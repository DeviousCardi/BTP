#include <stdio.h>
int main() {
    int k,n,i,p[n],a,b;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
            scanf("%d",&p[i]);
            if(k==p[0]+p[i])
            {break;}
            else
            printf("unlucky"); }
    printf("lucky");
    return 0; }