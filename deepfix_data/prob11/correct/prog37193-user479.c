#include <stdio.h>
int check(int arr[],int s,int n) {
    if(s >=0 ) {
        if( s == 0) {
            printf("YES");
            return 1; }
        else {
            for(int i = 0 ; i<n ; i++)
               printf("%d\n",check(arr,s-arr[i],n)); } }
    return 0; }
int main() {
    int n;
    long int s;
    scanf("%d %ld",&n,&s);
    int arr[n];
    for(int i=0 ; i<n;i++)
        scanf("%d",&arr[i]);
    if(check(arr,s,n))
        printf("YES");
    return 0; }