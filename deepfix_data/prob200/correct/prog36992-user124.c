#include <stdio.h>
int n;
int arr[100];
int mindiff=888;
int i,x;
int getMaxLessThan(int upperLimit){
    int j=0;
    for (i=0;i<n;i++){
        if(arr[i]<upperLimit){
            x=(upperLimit)-(arr[i]);
            if (x<mindiff){
                mindiff=x;
                j=i; } } }
    return arr[j]; }
int main(){
    scanf("%d",&n);
    int a=0;
    for (i=0;i<n;i++){
    scanf("%d",&arr[i]); }
    a=getMaxLessThan(2);
    printf("%d",a);
    return 0; }