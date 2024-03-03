#include <stdio.h>
int main(){
    int k,n,i;
    int number,frequency[500];
    scanf("%d\n%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&number);
        frequency[number]=1; }
    for(number=0;number<500;number++) {
        if(frequency[number]!=0&&frequency[k-number]!=0) {
           printf("lucky");
           break; }
        else {
           printf("unlucky"); } }
    return 0; }