#include <stdio.h>
int main(){
    int n=0,a,i,s=0;
    scanf("%d",&a);
    for(i=0;a!=0;i++) {
        n = a % 10;
        a = a/10;
        s = s + n; }
    for(i = 2016;;i++) {
        if(i%s==0) {
            printf("%d",i);
            break; } }
    return 0; }