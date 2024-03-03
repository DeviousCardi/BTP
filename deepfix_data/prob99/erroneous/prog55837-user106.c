#include<stdio.h>
#include<math.h>
int check(int arr[n]) {
    int max=0;
    for(int i=0;i<n;i++) {
        if(arr[i]>=max)
        max=arr[i]; } }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int maxvariable=0;
    int temp;
    int maxTill[n];
    maxTill[0]=1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(arr[j]<arr[i]) {
                temp=arr[j]; }
            maxvariable=max(maxvariable,temp); }
        maxTill[i]=1+maxvariable; }
    printf("%d",check(maxTill));
    return 0; }