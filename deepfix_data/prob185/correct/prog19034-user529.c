# include <stdio.h>
int check(int[],int,int);
int main() {
    int N,S,i,res;
    scanf("%d",&N);
    scanf("%d",&S);
    int trans[N];
    for(i=0;i<N;i++)
        scanf("%d",&trans[i]);
    res=check(trans,S,N-1);
    if(res==1)
        printf("YES");
    else
        printf("NO");
    return 0; }
int check(int a[],int s,int n) {
    if(s==0)
        return 1;
    if(n==0)
        return 0;
    return (check(a,s-a[n],n-1) || check(a,s,n-1)); }