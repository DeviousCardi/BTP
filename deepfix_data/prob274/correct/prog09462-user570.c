#include <stdio.h>
int main() {
    int i,x,n,room[n],counter=0;
    scanf("%d",&n);
    x=room[1];
    scanf("%d",&x);
    if(n<=100)
    for(i=2;i<=n;i++) {
        while(room[i]==x)
        counter++;
        continue; }
    if(counter==1)
    printf("%d",n-1);
    return 0; }