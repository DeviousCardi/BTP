#include <stdio.h>
int main() {
    int n,t=0,k=0;
    scanf("%d",&n);
    int x[n],mov[50];
    for(int i=0;i<n;i++)    scanf("%d",&x[i]);
    mov[0]=1;
 for(int j=1;j<50;j++) {
     mov[j]=x[mov[j-1]- 1]; }
 for(int l=0;l<50;l++) {
     for(int m=1+l;m<50;m++)
     if(mov[m]==mov[l]) k=m-l; }
 printf("%d",k);
    return 0; }