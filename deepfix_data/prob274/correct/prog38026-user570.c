#include <stdio.h>
int main() {
    int i,j=3,n=2;
    int room[n],counter;
    scanf("%d",&n);
    for(i=2;i<=n;i++) {
        while((n<=100)&(i<j))
        scanf("%d",&room[i]);
        counter=0;
        if(room[i]==room[j])
        counter++; }
    if(counter==1) {
        printf("%d",j-1);
        printf("%d",j-i); }
    return 0; }