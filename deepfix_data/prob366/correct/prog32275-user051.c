#include <stdio.h>
int main(){
    int n,enter[400],i,j,min=0;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",enter[i]);
        if(i>=n) {
            for(j=0;j<n;j++) {
                if(enter[i]==enter[j]) {
                    if(min<(i-j))
                        min=(i-j); } } } }
    printf("%d",min);
    return 0; }