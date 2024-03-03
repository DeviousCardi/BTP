#include <stdio.h>
int main() {
    int n,arr[1001],count[1001],i,rep,miss;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &arr[i]);
    for(i=1; i<=n; i++)
        count[i]=0 ;
    for(i=1; i<=n; i++) {
            count[arr[i]]++; }
    for(i=1; i<=n; i++) {
            if(count[i]==0)
                miss=i;
            else if(count[i]==2)
                rep=i; }
    printf("%d\n%d",rep,miss);
    return 0; }