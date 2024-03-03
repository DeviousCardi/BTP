#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[2*n];
    int i,y;
    for(i=0;i<2*n;i++) {
        scanf("%d",&y);
        s[i]=y; }
    printf("%d",s[2*n-3]);
    return 0; }