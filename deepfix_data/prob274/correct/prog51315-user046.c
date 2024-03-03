#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int count[n+1];
    for(int i=0;i<=n;i++)
    count[i]=0;
    int iteration[n+1];
    for(int h=0;h<=n;h++)
    iteration[h]=0;
    int i=1;int c=1;int k=0;
    while(1) {
        count[i]=count[i]+1;
        for(k=0;k<=n;k++) {
            if(count[k]==2)
            break; }
        if(count[k]==2)
        break;
        iteration[i]=c;
        i=arr[i-1];
        c++; }
    int u=iteration[k]-c-1;
    printf("%d %d",c-1,c+2-iteration[k]);
    return 0; }