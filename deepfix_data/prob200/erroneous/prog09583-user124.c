#include <stdio.h>
int arr[100]={0};
int n;
int maxdiff=
for (i=0;i<n;i++){
    scanf("%d",&arr[i]); }
int getMaxLessThan(int upperLimit){
    for (i=0;i<n;i++){
        if(arr[i]<upperlimit){
            x=(upperlimit)-(arr[i]);
            if x<maxdiff{
                maxdiff=x;
                return arr[i]; } } } }
int main(){
    a=getMaxLessThan(4);
    printf("%d",a);
    return 0; }