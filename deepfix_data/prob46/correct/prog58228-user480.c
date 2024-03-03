#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    int count=0;
    int i=2;
    for(i!=1; i<n; n%i==0) {
     count++;
    continue;}
    if (count==m)
    printf("YES");
    else
    printf("NO");
    return 0; }