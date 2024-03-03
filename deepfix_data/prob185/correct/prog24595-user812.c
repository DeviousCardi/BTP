#include <stdio.h>
int sumcheck(int a[],int s,int i,int n){
     if(s==0) return 0;
     if(i==n) return 1;
     return(sumcheck(a,s,i+1,n) || sumcheck(a,s-a[i],i+1,n)); }
int main() {
    int a[1000],n,s,i,l;
     scanf("%d %d",&n,&s);
       for(i=0;i<n;i++){
           scanf("%d ",&a[i]); }
          l=sumcheck(a,s,0,n);
          if(l==0)
          printf("NO");
          else printf("YES");
    return 0; }