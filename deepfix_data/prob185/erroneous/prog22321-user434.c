#include <stdio.h>
#define MAXSZ 30
int sumExists(int array[], int sz, int sum) {
    if(sum == 0)
        return 1
    if(sz==1)
        if(array[0] == sum)
            return 1
        else
            return 0
    return sumExists(array, sz-1, sum) || sumExists(array, sz-1, sum - array[sz-1]); }
int main() {
    int sz, array[MAXSZ], sum;
    scanf("%d %d\n", &sz, &sum);
    for(int i = 0; i<sz; i++)
        scanf("%d", &array[i]);
    if(sumExists(array, sz, sum))
        printf("YES");
    else
        printf("NO");
    return 0; }