#include <stdio.h>
int n;
int check(int ar[],int ls,int rs,int i) {
    printf("%d %d\n",ls,rs);
    if(i==n) {
        printf("%d\n",ls);
        if(ls==rs)
          return 1;
        else
          return 0; }
    else {
        printf("11");
        return check(ar,ls+ar[i],rs,i+1) || check(ar,ls,rs+ar[i],i+1); } }
int main() {
    int ar[n];
    for(int i=0;i<n;i++)
       scanf("%d",&ar[i]);
    int c=check(ar,0,0,0);
    if(c==1)
      printf("YES");
    else
      printf("NO");
    return 0; }