#include <stdio.h>
int n;
int sumcheck(int a[], int pos, int sum) {
    if(sum == 0)
        return 1;
    if((pos == n)||(sum < 0))
        return 0;
    int test = sumcheck(a, pos + 1, sum - a[pos]);
    if(test == 1)
        return 1;
    else {
        test = sumcheck(a, pos + 1, sum)
        if(test == 1)
            return 1;
        else
            return 0; } }
int main() {
    int sum;
    scanf("%d %d", n, sum);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int test = sumcheck(a, 0, sum);
    (test == 1) ? printf("YES") : printf("NO");
    return 0; }