#include <stdio.h>
int main(){
    int k=0;
    int n,h;
    int sum=0;
    scanf("%d",&n);
    while(n>0) {
        h=n%10;
        sum=sum+h;
        n=n/10; }
    while((2016+k)%sum!=0) {
        k++; }
    printf("%d\n",2016+k);
    return 0; }