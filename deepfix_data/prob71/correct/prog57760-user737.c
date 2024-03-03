#include <stdio.h>
void sort(long int,long int[]);
int main() {
    long int n,i;
    scanf("%ld",&n);
    long int bid[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&bid[i]); }
    sort(n,bid);
    for(i=0;i<n;i++) {
        printf("%ld ",bid[i]); }
    return 0; }
void sort(long int n,long int bid[]) {
    static int count=0;
    count++;
    int min=bid[0];
    for(int i=0;i<n;i++) {
        if(bid[i]<=min) {
            min=bid[i]; } }
    int t=bid[0];
    bid[0]=min;
    for(int i=1;i<n;i++) {
        if(bid[i]==min){
            bid[i]=t;
            break; } }
    if(n==0) return;
    sort(n-1,bid+count); }