#include <stdio.h>
int main()
{   long int i, j, n, k, a[100000], temp;
    scanf("%ld",&n);
    scanf("%ld",&k);
    for(i = 0; i < n; i++)
        scanf("%ld",&a[i]);
    for(i = 1; i <= n; i++){
        for(j = 0; j < n; j++){
            if(a[j] > a[j - 1]){
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp; } } }
    printf("%ld",a[k - 1]);
    return 0; }