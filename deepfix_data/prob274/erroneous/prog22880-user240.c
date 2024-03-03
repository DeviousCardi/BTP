#include <stdio.h>
int main(){
    int n,i,j,k,x,y;
    scanf("%d",&n);
    int a[n];
    int b[2*n];
    b[0]=1;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i];) }
    for(j=0; ;j++) {
        j=a[j]-1;
        b[i+1]=j;
        for(k=0;k<=i;k++) {
            if(b[i+1]==b[k]) {
                x=i;
                y=i+1-k;
                for(l=i+2;l<2*n;l++) {
                    b[l]=0; }
                break;
            };
        };
        if(b[i+1]==b[k]) {
            break;
        }; }
    return 0; }