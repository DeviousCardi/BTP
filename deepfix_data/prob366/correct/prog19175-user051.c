#include <stdio.h>
int main(){
    int enter[400],i,j,n,min=999;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&enter[i]);
        for(j=0;j<n;j++) {
            if(enter[i]==enter[j]) {
                if(min>(i-j))
                    min=(i-j); } } }
    printf("%d",min);
    return 0; }