#include <stdio.h>
int main() {
    int num1,ar[500],i,j,temp;
    int sum=0;
    scanf("%d\n",&num1);
    for(i=0;i<num1;i++) {
        scanf("%d,",&ar[i]); }
    for(i=0;i<num1;i++) {
        for(j=i;j<num1;j++) {
            if(ar[i]>=ar[j]) {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp; } } }
    for(i=0;i<num1;i++) {
        printf("%d ",ar[i]); }
    for(i=0;i<num1;i++) {
        for(j=i;j<num1;j++) {
            if(ar[i]!=ar[j]) {
                sum=sum+ar[j];
                break; }
            else {
                continue; } } }
    printf("%d ",sum);
    if(sum==num1) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }