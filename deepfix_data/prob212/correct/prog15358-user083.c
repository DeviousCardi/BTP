#include <stdio.h>
int main(){
    int n,i,j,sum;
    scanf("%d",&n);
    sum=(n%10)+((n/10)%10)+((n/100)%10)+((n/1000)%10);
    for(i=2016;;i++){
        if(i%sum==0)
        break;
        else
        continue; }
    printf("%d",i);
    return 0; }