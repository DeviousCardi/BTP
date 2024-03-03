#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{   int i, g = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] < upperLimit && arr[i] > g) {
            g = arr[i]; }
    return g; } }
int main()
{   int k, i, j, p, g;
    scanf("%d %d",&n,&k);
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for(i = 0; i < n; i++) {
        if(arr[i] > arr[i + 1]){
            j = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = j; } }
    printf("%d",arr[n - 1]);
    for(p = 1; p < k; p++) {
       g = getMaxLessThan(arr[n - 1]);
       printf("%d",g); }
    return 0; }