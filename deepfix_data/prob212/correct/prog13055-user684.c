#include <stdio.h>
int main() {
    int by;
    int d,sum=0,i;
    scanf("%d",&by);
    for(int j=by;j>0;) {
        d=j%10;
        sum=sum+d;
        j=j/10; }
    printf("%d",by);
    for(i=2016;;i++) {
        if((i%sum)==0) {
            printf("%d",i);
            break; } }
    return 0; }