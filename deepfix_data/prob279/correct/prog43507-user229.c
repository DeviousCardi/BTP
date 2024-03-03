#include <stdio.h>
int main() {
    int n,i,j,rep,mis,x;
    int num[100];
    int set[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]);
        for(j=0;j<i;j++) {
            if(num[j]==num[i])
            {rep=num[i]; break;} } }
    for(i=0;i<n;i++)
    {   x=0;
        set[i]=i+1;
        for(j=0;j<n;j++) {
            x=x+(set[i]==num[j]);
            if(x!=0) break; }
        if(x==0) break; }
    mis=set[i];
    printf("%d \n",rep);
    printf("%d",mis);
    return 0; }