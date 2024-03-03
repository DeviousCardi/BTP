#include <stdio.h>
int flag;
void check_sum(int a[],int N,int S) {
    flag=0;
    if(N==0||S<0)
    return;
    if(S==0) {
        flag=1;
    printf("YES");
    return; }
    check_sum(a,N-1,S);
    check_sum(a,N-1,S-a[N-1]); }
int main() {
    int N,S,i;
    scanf("%d %d",&N,&S);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    check_sum(a,N,S);
    if(flag==0)
    printf("NO");
    return 0; }