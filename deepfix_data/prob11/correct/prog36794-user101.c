#include <stdio.h>
int s;
int sum (int n, int a[n],int t){
    int i;
    if(t==s)
        return 1;
    else{
        for(i=0;i<n;i++){
        sum (n-1,a-a[i],t-a[i]); } } }
int main() {
    int n,t=0,i;
    scanf("%d %d",&n,&s);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        t=t+a[i]; }
    if(sum(n,a,t))
        printf("YES");
    else
        printf("NO");
    return 0; }