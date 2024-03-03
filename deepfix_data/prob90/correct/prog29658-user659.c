#include <stdio.h>
int main(){
    int k,n,i,j,count;
    int numbers[1000];
    scanf("%d\n%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&numbers[i]); }
    for(i=0;i<n;i++) {
        if(numbers[i]%2==0) {
            for(j=0;i<n;i++) {
                if((numbers[j]==k-numbers[i])&&(numbers[j]%2!=0)) {
                    count=count+2; }
                else {
                    count=count+1; } } }
        else {
            count=count+n; } }
    if(count==n*n) {
        printf("unlucky"); }
    else {
        printf("lucky"); }
    return 0; }