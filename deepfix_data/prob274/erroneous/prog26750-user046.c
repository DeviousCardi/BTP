#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int count[n+1];int c=0;
    for(int i=0;i<=n;i++)
    count[i]=0;
    int iteration[n+1];
    for(int h=0;h<=n;h++)
    iteration[h]=0;
    int i=1;int c=1;
    while(1) {
        count[i]=count[i]+1;
        for(int k=0;k<n;k++) {
            if(count[k]==2);
            goto jump; }
        iteration[i]=c;
        i=arr[i-1];
        c++;
        jump:
        break; }
    int u=iteration[i]-c-1;
    printf("%d %d",iteration[])
    return 0; }