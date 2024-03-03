#include <stdio.h>
int main() {
    int n,i,j,x;
    int count[100];
    int num[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d,",&num[i]); }
    for(i=0;i<n;i++) {
        count[i]=0;
        for(j=0;j<n;j++) {
            if(num[i]==num[j]) {
                count[i]=count[i]+1; } } }
    for(i=0;i<n;i++)
    {   x=0;
        x=x+(count[i]!=num[i]);
        if(x!=0)
        {printf("No");break;} }
    if(x==0) printf("Yes");
    return 0; }