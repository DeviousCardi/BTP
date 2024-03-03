#include <stdio.h>
int num(int start,char ch[]) {
    int end=start,i=start,p=1,count=0;
    while(ch[i]!=',')
    {if(ch[i]=='/0')
    break;
        end++;
        i++; }
    end--;
    while(end!=(start-1)) {
        count=count+(ch[end]-'0')*p;
        p*=10;
        end--; }
    printf("%d ",count);
    return count; }
int main() {
    char m[]="12,1,2,11";
    int a[100],n=0,i=0,j=0;
    while(m[i]!='\0') {
        if(m[i]==0) {
           a[j]=num(0,m);
           j++;
           n++; }
       else {
              if(m[i]==',')
              a[j]=num(i+1,m);
              n++;
              j++; }
          i++; }
    return 0; }