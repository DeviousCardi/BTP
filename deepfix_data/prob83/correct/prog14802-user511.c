#include <stdio.h>
int n;
void rot(int d,int mat[n]) {
    int ch,a,i;
    ch=mat[d];
    for(i=0;i<n;i++) {
        if(i!=d) {
        a=(i+d)%n;
        mat[a]=mat[i]; }
        else {
           mat[i+d]=ch; } }
    for(i=0;i<n;i++) {
        printf("%d ",mat[i]); } }
int main() {
    int n,d,i;
    scanf("%d",&n);
    int mat[n];
    for(i=0;i<n;i++) {
        scanf("%d",&mat[i]); }
    scanf("%d",&d);
    rot(d,mat);
    return 0; }