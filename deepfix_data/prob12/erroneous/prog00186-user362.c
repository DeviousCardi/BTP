#include <stdio.h>
int main(){
    int i,j,n,x,a[200],index;
    scanf("%d",&n);
    for (i=0;i<2*n;i++)
        scanf("%d",&a[2*n]);
        for(i=0;i<2*n;i++) {
            for(j=i+1;j<2*n;j++) {
                if(a[i]==a[j]) {
                    x=j-i;
                    z[index]=x;
                    break; } } }
    for(index=0;index<2*n;index++) {
        z[index]>=0;
        z[index]<=z[index]; }
    printf("%d",z[index]);
    return 0; }