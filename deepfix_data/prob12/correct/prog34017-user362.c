#include <stdio.h>
int main(){
    int i,j,n,x,a[200];
    int min=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[n]);
        for(i=0;i<n;i++) {
            for(j=i+1;j<n;j++) {
                if(a[i]==a[j]) {
                    x=j-i;
                    x=x+min;
                    printf("%d",x); } } }
    return 0; }