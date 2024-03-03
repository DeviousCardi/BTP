#include <stdio.h>
int main(){
    int a,n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a);
            if(i==j) {
                if(a==1) {
                    count=count+1;
                }; }
            else {
                if(a==0) {
                    count=count+1;
                };
            };
        };
    };
    if(count==n*n) {
        printf("yes"); }
    else {
        printf("No");
    };
    return 0; }