#include <stdio.h>
int main() {
    int k,n,x,m,i,j,a[100];
    scanf("%d", &k);
    scanf("%d", &n);
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    for(i=0;i<n;i++) {
        x=k-a[i];
        for(j=0;j<n;j++) {
            m=0;
            if(a[j]==x) {
                m=1;
                printf("lucky");
                break; } } }
    if(m==0)
        printf("unlucky");
    return 0; }