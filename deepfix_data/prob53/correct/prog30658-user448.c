#include<stdio.h>
int diff(int start){
    int output=0,a,b,n;
    if (start==0){
        scanf ("%d",&n);
        scanf("%d",&a);
        output=a; }
    if (start=n){
        return output; }
    scanf ("%d",&b);
    output=output-b;
    return diff(start+1); }
int main() {
    int output;
    output=diff(0);
    printf("%d",output);
    return 0; }