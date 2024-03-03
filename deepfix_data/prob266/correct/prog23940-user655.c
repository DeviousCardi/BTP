#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s;
    s=(n%10)+(((n%100)-(n%10))/10)+(n/1000)+((n/100)%10);
    int i;
    for(i=2016;1>0;i++){
    if((i%s)==0){
        printf("%d",i);
        break; } }
    return 0; }