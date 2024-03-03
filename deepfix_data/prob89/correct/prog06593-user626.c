#include <stdio.h>
int main() {
    int k, n, a[100],c=0;
    scanf("%d\n%d", &k,&n );
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    for(int i=0;i<(n-1);i++) {
        for(int j=i+1;j<n;j++) {
            if(k==(a[i]+a[j])) {
                printf("lucky");
                c++;
                break; } }
        if(c>0)
        break; }
    if(c==0)
    printf("unlucky");
    return 0; }