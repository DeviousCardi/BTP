#include <stdio.h>
int main(){
    int k,n,i;
    int number[1000];
    scanf("%d\n%d",&k,&n)
    for(i=0;i<n;i++) {
        scanf("%d",&number[i]); }
    for(i=0;i<n;i++) {
        if(number[i]%2==0) {
            for(j=0;i<n;i++) {
                if((numbers[j]==k-numbers[i])&&(numbers[j]%2!=0) {
                    printf("lucky"); }
                else {
                    printf("unlucky"); } } }
        else {
            printf("unlucky"); } }
    return 0; }