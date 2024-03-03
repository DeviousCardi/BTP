#include <stdio.h>
int main() {
    int k,n,i,j,z;
    int a[100];
        scanf("%d%d",&k,&n);
    for( i=0;i<n;i=i+1) {
            scanf("%d",&a[i]); }
    for(i=0;i<n;i=i+1) {
            for (j=i+1;j<n;j=j+1) {
            if
                (i==j+k) {
                        printf("lucky");
                        break; }
                    else {
                    z=z+1; } }
        if (z==n-1) {
                printf("unlucky"); } }
    return 0; }