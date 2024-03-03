#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int n2=n;
    int s=0;
    while(n2>0) {
        int d=n2%10;
        s=s+d;
        n2=n2/10; }
    int y=0;
    for(int i=2016;;i++) {
        if((i%s)==0) {
            y=i;
            break; } }
    printf("%d",y);
    return 0; }