#include <stdio.h>
int main() {
    int k,n,b=0;
    int a[100];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(j!=i) {
                    if((a[i]+a[j])==k) {
                        b=1;
                        break; } } }
            if(b==1)
                break; }
    if(b==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }