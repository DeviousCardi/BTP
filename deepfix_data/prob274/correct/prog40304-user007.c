#include <stdio.h>
int main() {
    int n,t=0,k=0,j=0;
    scanf("%d",&n);
    int x[n],mov[n];
    for(int i=0;i<n;i++)    scanf("%d",&x[i]);
    mov[0]=1;
 for(int j=1;j<n;j++) {
     mov[j]=x[mov[j-1]];
     printf("%d\n",mov[j]); }
    return 0; }