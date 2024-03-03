#include <stdio.h>
int main(){
    int a[400];
    int i,j,n,min;
    scanf("%d\n",&n);
    for(i=0;i<(2*n);i++)
        scanf("%d",&a[i]);
    min=n;
    for(i=0;i<n;i++) {
        for(j=n;j<(2*n);j++) {
            if(a[i]==a[j]) {
                if((j-i)<min)
                    min=j-i; } } }
    printf("%d",min);
    return 0; }