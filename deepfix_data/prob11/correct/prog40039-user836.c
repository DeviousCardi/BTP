#include <stdio.h>
int check(int num[],int start,int size,int s,int sum) {
        for(int i=start;i<size;i++)
    {    sum=sum+num[start];
         if(sum==s)
         return 1;
         else
         return check(num,start+1,size,s,sum);
         sum=0; }
    return 0; }
int main() {
    int n,s;
    scanf("%d %d\n",&n,&s);
    int num[1000000];
    for(int i=0;i<n;i++)
    scanf("%d ",&num[i]);
    if(check(num,0,n,s,0))
    printf("YES");
    else
    printf("NO");
    return 0; }