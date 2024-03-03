#include <stdio.h>
int check(int, int arr[], int );
int main(){
    int n, i, n1, x, j;
    int t, k;
    int exits[100];
    int arr[100];
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &exits[i]);
    arr[0]=1;
    x=arr[0];
    n1=1;
    i=1;
    do {
        arr[i] = exits[x-1];
        x = arr[i];
        n1++;
        i++;
    }while(check(x, arr, n1-1)!=1);
    for(i=0;i<n1;i++) {
        for(j=i+1;j<n1;j++) {
            if(arr[i]==arr[j])
                k = j-i;
                t = j; } }
    printf("%d %d", t, k);
    return 0; }
int check(int x, int arr[], int n) {
    int i;
   for(i=0;i<n;i++) {
       if(arr[i]==x)
        return 1; }
   return 0; }