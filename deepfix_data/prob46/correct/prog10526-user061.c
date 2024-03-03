#include <stdio.h>
int main(){
 int i, k=0, m,n;
 scanf("%d %d", &m, &n);
 for(i=2;i<n;i++){
     if(n%i==0){ k=k+1;} }
 if(m==k){ printf("YES"); }
 else printf("NO");
    return 0; }