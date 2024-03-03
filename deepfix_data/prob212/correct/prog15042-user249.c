#include <stdio.h>
int main() {
    int y[4];
    int i=0,n,j=0,k=0;
    scanf("%d",&n);
    while(n!=0) {
        scanf("%d",&y[i]);
        i++;
        n=n%10; }
    for(j=0;j<4;j++)
        k=k+y[j];
    printf("%d",k);
    return 0; }