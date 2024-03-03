#include <stdio.h>
int main() {
    int n,arr[30],i,j,k,l;
    scanf("%d"&n);
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]); }
    for(i=0;i<n;i++) {
        for(j=1;j<n;j++) {
            for(k=2;k<n;k++) {
                for(l=3;l<n;l++) {
                    if((arr[i]+arr[j])==(arr[k]+arr[l]))
                    cout++; } } } }
    if(count>=2)
    printf("YES");
    else
    printf("NO");
    return 0; }