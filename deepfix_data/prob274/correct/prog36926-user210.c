#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d\n",&n);
    int room[n];
    for(i=0;i<n;i++) {
        scanf("%d",&room[i]); }
    for(i=0;i<n;i++) {
         for(j=i+1;j<n;j++) {
             if(room[i]==room[j]) {
                 break; } }
         if(room[i]==room[j]) {
             break; } }
    k=0;
    int a;
    int count=0;
    while(k<n) {
        a=room[k];
        k=a-1;
        count=count+1;
        if(k==j) {
            count=count+1;
            break; } }
    k=i;
    int sum=0;
    while(k<n) {
        a=room[k];
        k=a-1;
        sum=sum+1;
        if(k==j) {
            sum=sum+1;
            break; } }
    printf("%d",sum);
    return 0; }