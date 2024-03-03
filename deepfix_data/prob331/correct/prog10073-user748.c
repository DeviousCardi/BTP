#include <stdio.h>
int main(){
          int n,a;
          int s1=0;
          int s2=0;
          for(int i=1;1<=n;i++) {
             for(int j=1;j<=n;j++) {
             if((i==j)&&(a==1))
             s1++; {
                 if((i!=j)&&(a==0))
                 s2++; {
                 if(s1==n&&s2==n*n-n)
         printf("GIVEN n*n matrix is an IDENTITY MATRIX");
            else
            printf("GIVEN n*n matrix is not an IDENTITY MATRIX"); } } } }
    return 0; }