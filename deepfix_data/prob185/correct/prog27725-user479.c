#include <stdio.h>
void swap( int arr[],int a,int b) {
    int temp;
    temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp; }
int check(int arr[30],int s,int n) {
    if(s >=0 ) {
        if( s ==  0) {
            return 1; }
        else {
            for(int i = 0 ; i < n  ; i++)
              return check(arr,s-arr[i],n); } }
    return 0; }
int main() {
    int n;
    long int s;
    scanf("%d %ld",&n,&s);
    int arr[30];
    for(int i=0 ; i<n;i++)
        scanf("%d",&arr[i]);
    if(n==0 && s==0)
        printf("YES");
    if(n==0 && s!= 0)
        printf("NO");
    if(n==1 && s == arr[0])
        printf("YES");
    if(n==1 && s!= arr[0])
        printf("NO");
    return 0; }