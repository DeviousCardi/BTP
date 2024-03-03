#include <stdio.h>
int check(int arr[], int n, int index, int suma, int sumb){
    if(index==n) return 0;
    if(index>0){
        if(suma==sumb) return 1; }
    return check(arr, n, index+1, suma+arr[index], sumb)||check(arr, n, index+1, suma, sumb+arr[index]); }
int main() {
    int n, i, p=0;
    scanf("%d\n", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]); }
    p=check(arr, n, 0, 0, 0);
    if(p==1) printf("YES");
    else printf("NO");
    return 0; }