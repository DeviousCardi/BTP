#include <stdio.h>
int main() {
  int n,flag=1,sum=0;
  scanf("%d",&n);
  int a[n],v;
  for(int i=0;i<n;i++){
      scanf("%d ",&a[i]); }
  for(int i=0;i<n;i++ && flag==1){
    for(int j=0;j<n;j++){
        if(a[j]==a[i]){
            printf("%d*\n",a[i]);
            v=a[i];
            flag=0;
            break; } } }
  for(int i=0;i<n;i++){
      sum+=a[i]; }
  printf("$%d\n",sum);
  int k=n*(n+1)/2;
  printf("@%d\n",k);
  printf("!!%d\n",v);
  printf("#%d",k-sum+v);
    return 0; }