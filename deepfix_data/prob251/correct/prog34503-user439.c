#include <stdio.h>
#include <stdlib.h>
long *mem[3];
long getways(int x, int m) {
    for(int i=0;i<1;i++) {
        for(int j=0;j<2;j++) {
            mem[i][j]=1; } }
    for(int i=1;i<3;i++) {
        for(int j=2;j<m;j++) {
            mem[i][j]=mem[i-1][j-2]; } }
    for(int i=3;i<5;i++) {
        for(int j=2;j<m;j++) {
            mem[i][j]=mem[i-3][j-1]+mem[i-1][j-2]; } }
    for(int i=5;i<x;i++) {
        for(int j=2;j<m;j++) {
            mem[i][j]=mem[i-5][j]+mem[i-3][j-1]+mem[i-1][j-2]; } }
    return mem[x][m]; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }