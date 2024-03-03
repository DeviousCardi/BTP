#include <stdio.h>
int main() {
    int y,i=2016,count=0,s=0;
    scanf("%d", &y);
    while(y!=0) {
        s=s+(y%10);
        y=y/10; }
    while(count==0) {
        if(i%s==0) {
            printf("%d", i);
            count++; }
        i++; }
    printf("%d", (i-1));
    return 0; }