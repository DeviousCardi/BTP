#include <stdio.h>
int main(){
    int i,j,n,count=0,min;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    min=2*n-1;
    for(i=0;i<n;i++) {
        for(j=n;j<2*n;j++) {
            if(a[i]!=a[j])
            count++;
            if(a[i]==a[j])
            break; }
    if(min>count+n-i)
    min=count+n-i;
    count=0; }
    printf("%d",min);
    return 0; }