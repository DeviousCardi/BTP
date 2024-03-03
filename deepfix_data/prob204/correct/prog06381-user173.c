#include <stdio.h>
#include <stdlib.h>
int palin(int arr[], int n) {
    int i,flag=1;
    for(i=0;i<n/2;i++)
        if(arr[i]!=arr[n-1-i])
            flag=0;
    return flag; }
int main() {
    long long int num;
    scanf("%lld",&num);
    int n=0;
    int arr[20];
    while(num!=0) {
        arr[n]=num%10;
        num/=10;
        n++; }
    if(palin(arr,n)==1)
        printf("YES");
    else
        printf("NO");
	return 0; }