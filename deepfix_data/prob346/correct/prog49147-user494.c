#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int cost[n],freq[n];
    for(int i=0;i<n;++i) {
        scanf("%d",&cost[i]); }
    for(int i=0;i<99;++i) {
        freq[i]=0; }
    for(int i=0;i<=99;++i) {
        for(int j=0;j<n;++j) {
            if(cost[j]==i)
            ++freq[i]; } }
    for(int i=0;i<99;++i) {
        for(int j=0;j<freq[i];++j) {
            printf("%d ",cost[i]); } }
    printf("end");
    return 0; }