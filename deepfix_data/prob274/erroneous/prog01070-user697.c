#include <stdio.h>
int main() {
    int n,i,k,j,p=0;
    scanf("%d",&n);
    int a[n+1],b[n+1],exit[n+1];
    a[0]=1;
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    exit[0]=1;
    for(j=1;j<=n;j++) {
        k=b[j-1];
    b[j]=a[k];
    exit[j]=b[j]; }
    for(i=0;i<=n;i++) {
        if(p!=0)
        break;
        for(j=i+1;j<=n,j++) {
         if(exit[i]==exit[j])
         printf("%d  %d",j,j-i);
         p=p+1;
         break; } }
    return 0; }