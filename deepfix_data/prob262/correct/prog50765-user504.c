#include<stdio.h>
#include<strings.h>
int main() {
    int n,i=0;
    scanf("%d",&n);
    int str[n];
    while(i<n) {
        scanf("%d",&str[i]);
        i++; }
    while(i<n) {
        str[i]=str[n-i];
        i++;
    printf("%d",str[i]); }
    return 0; }