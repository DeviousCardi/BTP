#include <stdio.h>
int main() {
    int n,i,j,count;
    scanf("%d",&n);
    int number[n],check[n];
    for(i=0;i<n;i++)
    scanf("%d",&number[i]);
    for(i=0;i<n;i++)
    {   count=0;
        for(j=0;j<n;j++) {
            if(number[j]==number[i]) {
                count++; } }
        if(count==number[i])
        check[i]=1 }
    count=0;
    for(i=0;i<n;i++) {
        if(check[i]=1)
        count++; }
    if(count=n)
    printf("YES");
    else
    printf("NO");
    return 0; }