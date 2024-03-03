#include <stdio.h>
int main() {
    int n,i,j,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
            for(j=1;j<n;j++) {
                scanf("%d",&num);
                if(i==j&& num!=1)
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX"); } }
    return 0; }