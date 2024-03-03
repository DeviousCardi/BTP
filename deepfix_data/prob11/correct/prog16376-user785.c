#include <stdio.h>
int sum(long int a[], int n, long int s, int i, long int sum1){
    int j;
    if(i == n - 1){
        return sum1; }
    for(j = i + 1; j < n; j++){
        if(sum1 + a[j] > s){
            continue; }
        sum1 = sum(a, n, s, j, sum1 + a[j]);
           printf("%ld\n",j);
        if(sum1 == s){
            return -1; } }
    return sum1; }
int sum_check(long int a[], int n, long int s){
    int i, f = 0;
    for(i = 0; i < n; i++){
       f = sum(a, n, s, i, a[i]);
       if(f == -1){
           return f; } }
    return 0; }
int main()
{   long int s, a[30];
    int n, i, f = -2;
    scanf("%d",&n);
    scanf("%ld",&s);
    for(i = 0; i < n; i++)
        scanf("%ld",&a[i]);
    f = sum_check(a, n, s);
    if(f == -1){
        printf("YES"); }
    if(f == 0){
        printf("NO"); }
    return 0; }