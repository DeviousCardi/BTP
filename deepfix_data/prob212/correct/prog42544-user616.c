#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int n2=n;
    int sum=0;
    while(n2>0) {
        int d=n2%10;
        sum=sum+d;
        n2=n2/10; }
    int year=0;
    for(int i=2016;;i++) {
        if((i%sum)==0) {
            year=i;
            break; } }
    printf("%d",year);
    return 0; }