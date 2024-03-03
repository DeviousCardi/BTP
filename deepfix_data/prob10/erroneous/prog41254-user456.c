#include<stdio.h>
int main() {
    int n,z[n],count=1;
    for(i=0;i<n;i++)
    scanf("%d "&z[i]);
    for(j=0;j<n;j++) {
        if(z[j]<z[j+1])
        count+=1; }
    printf("%d",count);
    return 0; }