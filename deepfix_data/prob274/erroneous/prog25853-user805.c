#include <stdio.h>
int main(){
    int n,i,count,j,k;
    scanf("%d",&n);
    if((n>=2)&&(n<=100))
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        b[i]=0; }
    count=0;
    k=0;
    for(i=0;i<n;i++) {
        b[0]=a[0];
      b[i+1]=a[a[k]-1];
      count=count+1;
      k=a[k]-1; }
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            if(b[j]==b[i]) {
                count=1;
                break; } }
        if(count==1)
        break; }
    printf("%d %d",i+1,i-j);
    return 0; }