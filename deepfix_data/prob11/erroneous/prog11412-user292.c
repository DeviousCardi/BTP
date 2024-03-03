#include <stdio.h>
int flag=0;
void sum(int n[],int pos,int s) {
    if(s==0) {
        printf("YES");
        exit(); }
    if(pos<0) {
        return; }
    sum(n,pos-1,s-n[pos]);
    sum(n,pos-1,s); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    intN[n];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d ",&N[i]); }
    sum(N,n,s);
    return 0; }