#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int num[n];
    int i=0,num1,cons;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    cons=num[1];
    for(i=0;num1!=cons;i++){
        num1=num[0];
        num[0]=num[num[0]-1]; }
    printf("%d",i);
    return 0; }