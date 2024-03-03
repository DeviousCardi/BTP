#include <stdio.h>
int prime(int n) {
    int result;
    for(int i=2;i<n;i++) {
        if(n%i==0) {
            result=0; }
        else {
            result=1; } }
    return result; }
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
    for(i=0;i<num1;i=j) {
        for(j=i;j<num1;j++) {
            if(ar[i]==ar[j]) {
                sum=sum+1; }
            else {
                break; } } }
    if(sum==num1) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }