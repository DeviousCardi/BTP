#include <stdio.h>
int main(){
    int n,i,j,k,min=0,count=0;
    scanf("%d\n",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
    scanf("%d ",&a[i]);
    for(j=0;j<n;j++) {
        if(min>count)
        min=count;
        for(k=j+1;k<2*n;k++) {
            if(a[j]!=a[k]) {
                count=count+1; }
            else break; } }
    printf("%d",min+1);
    return 0; }