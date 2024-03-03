#include <stdio.h>
int main() {
    int i,x,n,room[100],counter=0;
    scanf("%d",&n);
    x=room[1];
    scanf("%d",&x);
    for(i=2;i<=100;i++) {
        while(room[i]!=x)
        counter++;
        continue; }
    if(counter==1)
    printf("%d",i-1);
    return 0; }