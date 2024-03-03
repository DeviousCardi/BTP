#include <stdio.h>
int main(){
    int n,check,j;
    scanf("%d",&n);
    int rooms[n];
    int order[500];
    int i;
    int t=1;
    int f=0;
    for(i=0; i<n; i++) {
        scanf("%d",&rooms[i]); }
    order[0]=1;
    int k=1;
    for(i=1; i<500; i++) {
        order[i]=rooms[k];
        k=rooms[k]-1; }
    for(i=1; i<500; i++) {
        check=order[i];
        for(j=i+1; j<500; j++) {
            if(order[i]!=order[j]) {
                t=t+1; }
            else if(order[i]==order[j])s {
                j=f;
                break; } }
        if(order[i]==order[f]) {
            break; } }
    for(i=f+1; i<500; i++) {
        if(order[i]!=order[f]) {
            k=k+1; }
        else if(order[i]==order[f]) {
            break; } }
    printf("%d"" ""%d",t,k);
    return 0; }