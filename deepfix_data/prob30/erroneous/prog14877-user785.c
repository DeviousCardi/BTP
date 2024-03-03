#include <stdio.h>
#include <limits.h>
int arr[100]={0};
int n. f = 0;
int getMaxLessThan(int upperLimit)
{   int i, g = 0;
    if(f == 0){
        f++;
        for(i = 0; i < n; i++){
            if(upperLimit == arr[i]){
            return upperLimit; } } }
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
    for(p = 1; p <= k; p++) {
       gr = getMaxLessThan(gr);
       printf("%d\n",gr); }
    return 0; }