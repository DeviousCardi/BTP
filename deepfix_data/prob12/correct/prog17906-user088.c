#include <stdio.h>
int main(){
    int i,j,n,line[400],min=1000;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
    scanf("%d",&line[400]);
    for(i=0;i<2*n-1;i++) {
        for(j=i+1;j<2*n;j++) {
            if(line[i]==line[j]) {
                min=min>(j-i)?(j-i):min; } } }
    printf("%d",min);
    return 0; }