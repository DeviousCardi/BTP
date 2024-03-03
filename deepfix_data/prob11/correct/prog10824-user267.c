#include <stdio.h>
int  trnc(int a[],int S,int N) {
    int sum=0,i;
    if(N==0) return -1; }
int main() {
   int N,S;
   scanf("%d%d",&N,&S);
   int i;
   int a[N];
   for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    int b;
    b=trnc(a,S,N);
    if(b==-1) printf("NO");
    else printf("YES");
    return 0; }