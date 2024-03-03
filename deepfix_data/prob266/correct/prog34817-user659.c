#include <stdio.h>
int main() {
    int b,s,i;
    scanf("%d",&b);
    s=(b/1000)+((b%1000)/100)+((b%100)/10)+(b%10);
    for(i=b;i<10000;i++) {
        if(i%s==0) {
            printf("%d",i);
            break; } }
    return 0; }