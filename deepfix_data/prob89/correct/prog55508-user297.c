#include <stdio.h>
int main(){
    int k,n;
    scanf("%d %d",&k,&n);
    int i;
    int num[100];
    scanf("%d",&num[100]);
    for(i=0;i<=100;i++){
    if(k==num[i]+num[i])
            printf("lucky");
    else {
             printf("unlucky"); }
    return 0;} }