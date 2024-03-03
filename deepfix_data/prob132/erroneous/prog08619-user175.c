#include<stdio.h>
#include<string.h>
int main() {
  int n,a[100],i=0,j=0,ch,temp,k,flag;
    scanf("%d\n",&n);
    while(i<2*n-1) {
        ch=getchar();
        if(ch!=',') {
            a[j]=ch-'0';
            j++; }
        i++; }
    k=j;
    for(i=0;i<k;i++) {
        temp=a[i];
      int  count=0;
        for(j=0;j<k;j++) {
            if(a[j]==temp)
            count++; }
        if(count==temp)
        flag=1;
        else {
            flag=0;
            break; } }
    if(flag==1)
     printf("YES);"
     else
     printf("NO");
    return 0; }