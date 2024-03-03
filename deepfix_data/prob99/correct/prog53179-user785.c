#include<stdio.h>
#include<limits.h>
int longest(int k, int a[], int b[]){
    int j , m = INT_MIN, f = 0;
    if(k == 0)
        return 1;
    for(j = k - 1; j >= 0; j--){
        if(a[j] < a[k]){
            f = 1;
            m = m > (b[j] + 1)? m : b[j] + 1; } }
    if(f == 0)
        return 0;
    else
        return m; }
int main()
{   int n, a[20], b[20], i,m = INT_MIN;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for(i = 0; i < n; i++){
        b[i] = longest(i, a, b);
        m = m > b[i]?m:b[i]; }
    printf("%d",m);
    return 0; }