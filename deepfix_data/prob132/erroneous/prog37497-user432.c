#include <stdio.h>
int main() {
  int n,temp=0,flag=1,i,j;
  scanf("%d\n",&n);
  char ch[2*n];
  scanf("%s",ch);
  for(i=0;i<2*n;i++){
      for(j=0;j<2*n;i++){
          if(ch[j]==ch[i])
            temp++; }
      if(temp!=a[i]-'0'){
          flag=0;
          break; }
      temp=0; }
  if(flag==1)
    printf("Yes");
  else
    printf("No");
    return 0; }