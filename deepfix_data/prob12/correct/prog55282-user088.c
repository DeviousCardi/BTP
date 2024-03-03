#include <stdio.h>
int main(){
    int i,j,n,line[400],min=401;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(i=0;i=2*n;i++)
    scanf("%d",&line[400]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<2*n;j++) {
            if(line[i]==line[j])
            min=min>(j-i)?(j-i):min; } }
    return 0; }