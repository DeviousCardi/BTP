#include <stdio.h>
int main(){
    int i,j,amount[1000];
    int n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",amount[i]); }
    for(j=0;j<n;j++) {
    for(i=0;i<n;i++) {
        if(amount[i]>amount[i+1]) {
            t=amount[i];
            amount[i]=amount[i+1];
            amount[i+1]=amount[i]; } } }
    for(i=0;i<n;i++) {
    printf("%d",amount[i]); }
    printf("end");
    return 0; }