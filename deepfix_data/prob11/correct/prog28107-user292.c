#include <stdio.h>
int flag=0;
void sum(int n[],int pos,int s) {
    if(flag==1) {
        return; }
    if(s==0) {
        printf("YES");
        flag=1; }
    if(pos<0) {
        return; }
    sum(n,pos-1,s-n[pos]);
    sum(n,pos-1,s); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int N[n];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d ",&N[i]); }
    sum(N,n,s);
    if(flag==0) {
        printf("NO"); }
    return 0; }