#include <stdio.h>
int multiply(int m,int n) {
    if(n==1) return m;
    if(n<1) return 0;
    else return m+multiply(m,n-1); }
int main() {
    int N,S;
    int i,j;
    int flag;
    scanf("%d %d",&N,&S);
    int trans[N];
    for(i=0;i<N;i++)
        scanf("%d ",&trans[i]);
    int temp;
    for(i=0;i<N-1;i++) {
        for(j=i+1;j<N;j++) {
            temp=multiply(trans[i],trans[j]);
            if(temp==S) {
                printf("YES");
                flag=1;
                break; }
            else
                flag=0; } }
    if(flag==0)
        printf("NO");
    return 0; }