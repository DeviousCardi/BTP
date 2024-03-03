#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    int i;
    for(i=1;i<=n*n;i=i+1) {
            scanf("%d",&a);
            if (i%n==1||a!=1)
            {printf("GIVEN 4 x 4 matrix is NOT an IDENTITY MATRIX"); }
            else if (i%n!=1||a!=0)
            {printf("GIVEN 4 x 4 matrix is NOT an IDENTITY MATRIX"); }
            else {
                printf("GIVEN 4 x 4 matrix is an IDENTITY MATRIX"); } }
    return 0; }