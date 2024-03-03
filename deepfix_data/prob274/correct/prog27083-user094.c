#include <stdio.h>
int main(){
    int n,i,k,a[100],b[101],c1[100];
    scanf("%d ",&n);
    for(i=1;i<=n;i++) {
        scanf("%d ",&a[i]);
        if(a[i]==1)
        k=i; }
    int c,j=1;
    while(j!=101) {
        c=a[k];
      b[j++]=c;
    k=c; }
    for(i=1;i<100;i++) {
       for(j=i+1;j<=100;j++) {
           if(b[i]==b[j])
         {  c1[i]=j;break;}
           else c1[i]=1000; }
    }for(i=1;i<10;i++)
    printf("\n%d ",c1[i]);
    int r,min=c1[1];
    for(i=1;i<=n;i++)
    { if(min>c1[i])
       min=c1[i];
        r=i; }
    printf("%d %d",min,min-r+1);
    return 0; }