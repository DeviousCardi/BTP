#include <stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
         scanf("%d",&a);
         if((i==j)&&(a==1))
         continue;
         else if((i!=j)&&(a==0))
         continue;
         else
         break; }
        if(i==j) {
             if(i==n)
             printf("GIVEN 3 X 3 matrix is an IDENTITY MATRIX");
             else if(a==1)
             continue;
             else {
                printf("GIVEN 3 X 3 matrix is an IDENTITY MATRIX");
             break; } }
        if(i!=j) {
            if(a==0);
            continue;
            else {
                printf("GIVEN 3 X 3 matrix is not an IDENTITY MATRIX");
             break; } }
    return 0; }