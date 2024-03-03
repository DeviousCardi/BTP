#include <stdio.h>
int main(){
    int i,j,n,x,a[200];
    int min=1;
    scanf("%d",&n);
    for (i=0;i<2*n;i++)
        scanf("%d",&a[2*n]);
        for(i=0;i<n;i++) {
            for(j=i+1;j<n;j++) {
                if(a[i]==a[j]) {
                    x=j-i;
                    min<=x;
                    min=x;
                    printf("%d",x); } } }
    return 0; }