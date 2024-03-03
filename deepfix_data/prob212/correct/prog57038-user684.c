#include <stdio.h>
int main() {
    int by;
    int d,sum,i;
    scanf("%d",&by);
    printf("%d",by);
    for(i=2016;;i++) {
        sum=0;
        for(int j=i;j>0;) {
            d=j%10;
            sum=sum+d;
            j=j/10; }
        printf("%d",sum);
        if((by%sum)==0)
            break; }
    printf("%d",i);
    return 0; }