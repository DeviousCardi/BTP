#include <stdio.h>
int main() {
    int n,i,t=1,k=0,flag,ar[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&ar[i]);
    flag=ar[0];
    do {
        flag=ar[flag-1];
        t++; }
    while(flag!=ar[0]);
    do {
        flag=ar[flag-1];
        k++; }
    while(flag!=ar[0]);
    printf("%d %d",t,k);
    return 0; }