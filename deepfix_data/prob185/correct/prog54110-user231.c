#include <stdio.h>
int m;
int lll(int t[], int start, int n,int d){
    if(d!=m&&n!=0){
    int z[n],k,m;
    int i;
    for(i=0;i<n;i++){
        z[i]=t[start+i]; }
    for(i=0;i<n;i++){
        printf("%d  ",z[i]); }
    for(i=1;i<n;i++){
        k=z[0];
        z[0]=z[i];
        z[i]=k;
        m=lll(z,1,n-1,d+z[0]);
        if(m==1){
            printf("%d *** %d///  ",n,d);
            return 1; } } }
    else if(d==m){
        return 1; }
    else if(n==0){
        return 0; } }
int main() {
    int n,s,p;
    scanf("%d %d",&n,&s);
    m=s;
    int k[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&k[i]); }
    p=lll(k,0,n,0);
    if(p==1){
        printf("YES"); }
    return 0; }