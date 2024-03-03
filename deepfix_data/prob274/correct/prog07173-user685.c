#include <stdio.h>
int main(){
    int l,t,k,n,i,j,a[1000],b[1000],count=1,m,d1,c1,p,q;
    scanf("%d",&n);
    b[0]=1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    b[1]=a[0];
    for(j=1;j<n;j++){
        b[j+1]=a[(b[j]-1)]; }
    return 0; }