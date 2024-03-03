#include <stdio.h>
int check(int a[], int n, int current, int sum, int req_sum) {
    if(sum==req_sum)
        return 1;
    else if(current>=n)
        return 0;
    else if(check(a, n, current+1, sum+a[current], req_sum)||check(a, n, current+1, sum, req_sum))
        return 1;
    else
        return 0; }
int main() {
    int n, s;
    scanf("%d", &n);
    int input[n];
    scanf("%d", &s);
    for(int i=0;i<n;i++)
        scanf("%d", &input[i]);
    if(check(a, n, 0, 0, s))
        printf("YES");
    else
        printf("NO");
    return 0; }