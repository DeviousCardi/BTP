#include <stdio.h>
int main() {
    int i,j=3,n=2;
    int room[n];
    scanf("%d",&n);
    for(i=2;i<=n;i++) {
        if((n<=100)&(i<j))
        scanf("%d",&room[i]);
        while(room[i]=room[j])
        break; }
    if(room[i]==room[j]) {
        printf("%d",j-1);
        printf("%d",j-i); }
    return 0; }