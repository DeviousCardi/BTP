#include <stdio.h>
int main(){
          int n,a;
          int count=0;
         for(int i=1;1<=n;i++) {
             for(int j=1;j<=n;j++)
            scanf("%d",&a); {
            int j=1;
            if(i==j)
            count++; {
            if(count==n)
         printf("GIVEN n*n matrix is an IDENTITY MATRIX");
            else
            printf("GIVEN n*n matrix is not an IDENTITY MATRIX"); } } }
            printf("NOT an IDENTITY MATRIX"); } }
    return 0; }