#include <stdio.h>
int main() {
    int n,i,j,count=0,p=1;
    char ch;
    scanf("%d",&n);
    int x[n];
    scanf("%d",&x[0]);
    for(i=1;i<n;i++)
    {   scanf("%c",&ch);
        scanf("%d",&x[i]); }
    for(i=0;i<n;i++) {
        count=0;
        for(j=0;j<n;j++) {
            if(x[j]==x[i]) {
               count++; } }
        if(count==x[i]) {
            p=1; }
        else {
            p=0;
            break; } }
    if(p==1)
    printf("Yes");
    else
    printf("No");
    return 0; }