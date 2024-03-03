#include <stdio.h>
int check(int ar[],int n, int s,int i) {
    while (i<s)  {
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(ar[i]==i&&ar[j]==s-i&&i!=j)
            return 1; } }
    return check(ar,n,s,i+1);  }
    if(i>=s) return 0; }
int main(){
    int N,S;
    scanf("%d %d",&N,&S);
    int ar[N];
    int i;
    for(i=0;i<N;i++)
    scanf("%d ",&ar[i]);
    if(check(ar,N,S,S)>0)
    printf("YES");
    else printf("NO"); }