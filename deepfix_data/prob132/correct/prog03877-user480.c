#include <stdio.h>
int main() {
    int n,i,c,j,count;
    scanf("%d",&n);
    int b[1000];
    for(int i=0;i<n;i++) {
        scanf("%d",&b[i]);
        if(i<n)
        scanf(","); }
    count=0;
    for(i=0;i<n;i++) {
        c=0;
        for(j=0;j<n;j++) {
            if(b[i]==b[j])
            c++; }
        if(c==b[i])
        {count++;} }
    if(count==n)
    printf("Yes");
    else
    printf("No");
    return 0; }