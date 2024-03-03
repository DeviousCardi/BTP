#include <stdio.h>
int i=0;
int fun(int n,int a[],int key){
  if(key==0)
  return 1;
  if(n==0 && key!=0)
  return 0;
  if(a[n-1]>key)
  return fun(n-1,a,key);
  return fun(n-1,a,key)||fun(n-1,a,key-a[n-1]); }
int main() {
    int n,s;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    int v=fun(n,a,s);
    if(v==1)
    printf("YES");
    else
    printf("NO");
    return 0; }