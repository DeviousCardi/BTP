#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int room[n];
    for (int i=1;i<n;i++)
    scanf("%d",&room[i]);
    room[0]=1;
    for (int i=1;i<n;i++) {
        if (room[i]==room[0]) {
            printf("%d",i);
            break; }
        else }
    printf("%d",i);
    printf("%d",count);
    return 0; }