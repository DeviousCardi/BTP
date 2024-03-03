#include <stdio.h>
int main(){
    int i,j,n,a[200],d;
    scanf("%d",&n);
    int min=2*n;
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
            d=j-i; }
        if(min>d)
        min=d; }
    printf("%d",min);
    return 0; }