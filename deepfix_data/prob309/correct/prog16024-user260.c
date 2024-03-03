#include <stdio.h>
int main() {
    int i,ar[100],count[100],n;
    char ar1[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
       scanf("%d",&ar[i]);
       ++count[ar[i]];
       scanf("%c",&ar1[i]); }
for(i=0;i<n;i++) {
    if(count[ar[i]]==ar[i])
    continue;
    else {
    printf("No");
    break; } }
if(i==n)
printf("Yes");
    return 0; }