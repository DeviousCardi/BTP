#include <stdio.h>
int main() {
    int n,i,c,j,count;
    scanf("%d",&n);
    char b[100000];
    scanf("%s",b);
    int a[n];
    for(i=0;i<n;i++)
    a[i]=b[2*i];
    count=0;
    for(i=0;i<n;i++) {
        c=0;
        for(j=0;j<n;j++) {
            if(b[2*i]==b[2*j])
            c++; }
        if(c==(int)b[2*i])
        {count++;} }
    printf("%d ",count);
    if(count==n)
    printf("Yes");
    else
    printf("No");
    return 0; }