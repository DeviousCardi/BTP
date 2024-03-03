#include <stdio.h>
int main() {
    int n,arr[1001],count[1001],i,rep,miss;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &arr[i]);
    for(i=1; i<=n; i++) {
            count[arr[i]]++; }
    for(i=1; i<=n; i++) {
            if(count[i]==0)
                miss=count[i];
            else if(count[i]==2)
                rep=count[i]; }
    printf("%d\n%d",rep,miss);
    return 0; }