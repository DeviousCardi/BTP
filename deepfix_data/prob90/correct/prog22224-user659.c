#include <stdio.h>
int main(){
    int k,n,i,count=0;
    int number,frequency[500];
    scanf("%d\n%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&number);
        frequency[number]=1; }
    for(number=0;number<500;number++) {
        if(frequency[number]==1&&frequency[k-number]==0) {
           printf("lucky");
           break; }
        else {
           count=count+1; } }
    if(count==500) {
        printf("unlucky"); }
    return 0; }