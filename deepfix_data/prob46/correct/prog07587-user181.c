#include <stdio.h>
int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    int i=2,count=0;
    while(i<n) {
        if(n%i==0)
        count+=1;
        i++; }
    if(count==m)
    printf("YES");
    else
    printf("NO");
    return 0; }