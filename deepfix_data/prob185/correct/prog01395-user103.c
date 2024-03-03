#include <stdio.h>
int check(int n[], int num, int sum, int i) {
    if(num==0)
    {if(sum==0)
    return 1;
    else
    return 0; }
    else
    i++;
    return check(n, num-1, sum-n[i], i)+check(n, num-1, sum, i); }
int main() {
    int num, sum, n[30], i, k;
    scanf("%d%d", &num, &sum);
    for(i=0; i<num; i++)
    {scanf("%d", &n[i]); }
    i=0;
    k=check(n, num, sum, i);
    if(k>0)
    printf("yse");
    else
    printf("no");
    return 0; }