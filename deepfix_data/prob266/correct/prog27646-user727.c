#include <stdio.h>
int main() {
    int y,i,rem ,sum=0;
    scanf("%d",&y);
    for(i=y;i>0;i=i/10) {
        rem=i%10;
        sum=sum+rem; }
    for(i=2016;i>0;i++) {
        if(i%sum==0)
        break; }
    printf("%d",i);
    return 0; }