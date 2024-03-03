#include <stdio.h>
int main(){
    int n,i,j,k,min=100,count=0,r=0;
    scanf("%d\n",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
    scanf("%d ",&a[i]);
    for(j=0;j<n;j++) {
        for(k=j+1;k<2*n;k++) {
            if((a[j]!=a[k])&&r!=1) {
                count=count+1; }
            else {
                if(count<min)
                min=count;
                r=1; } } }
    printf("%d",min+1);
    return 0; }