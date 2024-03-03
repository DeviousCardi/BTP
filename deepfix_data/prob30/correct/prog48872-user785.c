#include <stdio.h>
#include <limits.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{   int i, g = 0, f = 1;
    if(f == 0){
        for(i = 0; i < n; i++){
            if(upperLimit == arr[i]){
            return upperLimit; } }
        f++; }
    for(i = 0; i < n; i++) {
        if(arr[i] < upperLimit && arr[i] > g) {
            g = arr[i]; } }
        return g; }
int main()
{   int k, i, p, gr;
    scanf("%d %d",&n,&k);
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    gr = INT_MAX;
    printf("%d\n",gr);
    for(p = 1; p <= k; p++) {
       gr = getMaxLessThan(gr);
       printf("%d\n",gr); }
    return 0; }