#include <stdio.h>
#include <stdlib.h>
int f=0;
long a[100][100];
int check(int b[],int n) {
    for(int i=0;i<f;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j]==b[j]) } } }
void getways(int x, int i,int b[]) {
    if(x==0) {
        if(check(b,i)) {
            a[f]=copy(b,i);
            f=f+1; } }
    if(x-1) {
        b[i]=1;
        getways(x-1,i+1,b); }
    if(x-3) {
        b[i]=3;
        getways(x-3,i+1,b); }
    if(x-5) {
        b[i]=5;
        getways(x-5,i+1,b); } }
int main() {
    int n;
    scanf("%d",&n);
    return 0; }