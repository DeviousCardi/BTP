#include <stdio.h>
int arr[100];
int n;
int mindiff=888;
int i,x;
int getMaxLessThan(int upperLimit){
    int j=0;
    for (i=0;i<n;i++){
        if(arr[i]<=upperLimit){
            x=(upperLimit)-(arr[i]);
            if (x<mindiff){
                mindiff=x;
                j=i; } } }
    return arr[j]; }
int main(){
    int max=-2;
    scanf("%d",&n);
    printf("%d ",n);
    int a=0;
    for (i=0;i<n;i++){
    scanf("%d",&arr[i]); }
    for (i=0;i<n;i++){
        a=getMaxLessThan(2);
        int b=2;
        printf("%d %d",a,b); }
    return 0; }