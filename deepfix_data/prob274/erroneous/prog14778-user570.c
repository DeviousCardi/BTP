#include <stdio.h>
int main() {
    int i,x,n=2;
    int room[n],counter=0;
    scanf("%d%d%d",&n,%n-1,&n-2);
    x=room[1];
    if(n<=100)
    for(i=2;i<=n;i++) {
        while(room[i]!=x)
        counter++;
        continue; }
    if(counter==1) {
        printf("%d",n-1); }
    else {
        printf("%d",n-2); }
    return 0; }