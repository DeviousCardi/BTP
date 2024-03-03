#include <stdio.h>
int main() {
  int n,temp=0,flag=1,i,j;
  scanf("%d\n",&n);
  char ch[2*n];
  scanf("%s",ch);
  for(i=0;i<2*n;i=i++){
      if(ch[i]==',')
        continue;
      for(j=0;j<2*n;j=j+2){
          if(ch[j]==ch[i]){
            temp++; }
          printf("%d\t%c\n",temp,ch[j]); }
      if(temp!=(ch[i]-'0')){
          flag=0;
          break; }
      temp=0;
      printf("\t%d\n",flag); }
  if(flag==1)
    printf("Yes");
  else
    printf("No");
    return 0; }