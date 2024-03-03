#include <stdio.h>
int sum(long int a[], long int s, int i){
    int j, sum = 0; }
int sum_check(long int a[], int n, long int s){
    int i, f = -1;
    for(i = 0; i < n; i++){ } }
int main()
{   long int s, a[30];
    int n, i, f = -1;
    scanf("%d",&n);
    scanf("%ld",&s);
    for(i = 0; i < n; i++)
        scanf("%ld",&a[i]);
    f = sum_check(a, n, s);
    if(f == 1){
        printf("YES"); }
    if(f == 0){
        printf("NO"); }
    return 0; }