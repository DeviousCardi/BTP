#include <stdio.h>
int main() {
    int n,A[100],i,B[10000],f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    B[0]=1;
    B[1]=A[0];
    int j=1;
    int k;
while(f==0) {
     for(k=j-1;k>=0;k--) {
        if(B[j]==B[k]) {
              f=1;
              break; } }
           if(f==1)
            break;
            j++;
            B[j]=A[B[j-1]-1]; }
printf("%d %d",j,j-k);
    return 0; }