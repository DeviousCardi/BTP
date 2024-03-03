#include <stdio.h>
int main(){
    int n;
    int i;
    int j;
    scanf("%d",&n);
    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            scanf("%d",&n);
            if(((i!=j)&&(n=0))||((i=j)&&(n=1)))
            printf("GIVEN 3*3 matrix is an IDENTITY MATRIX");
            else
            printf("GIVEN 3*3 matrix is NOT an IDENTITY MATRIX"); } }
    return 0; }