#include <stdio.h>
int main(){
    int n,min,l,i,j;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                l=j-i; }
            if(min>l)
            min=l; } }
    printf("%d",min);
    return 0; }