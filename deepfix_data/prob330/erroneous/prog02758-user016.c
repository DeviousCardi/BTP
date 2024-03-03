#include <stdio.h>
int main {
    int n,i,npk=0;
    scanf("%d ",&n);
    int peak[n];
    for(i=0;i<n;i++)
    scanf("%d ",&peak[i]);
    for(i=1;i<n-1;i++) {
        if(peak[i]>peak[i-1]&&peak[i]>peak[i+1])
        npk++; }
    printf("%d",npk);
    return 0; }