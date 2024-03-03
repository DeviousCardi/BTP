#include <stdio.h>
int i=0;
void fun(int n,int a[],int key){
  if(n==1){
      if(key==a[i]){
      printf("YES"); }
      else return fun(n,a[],key) } } }
int main() {
    int n,s;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[n]); }
    fun(n,a,s);
    return 0; }