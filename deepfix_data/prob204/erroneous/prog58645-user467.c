#include <stdio.h>
#include <stdlib.h>
int main() {
               long int count=0,n;
               scanf("%lp",&n);
               int i=0;
               int g;
               int s[i];
               int ch;
               ch=getchar();
               int c;
               c=(n/10);
               g=n%10;
               count=count+1;
                   while(c>0)
               {   count=count+1;
                   c=(n/10);
                    c=n-g;
                   if(c<10) {
                       break; } }
              while(ch!=EOF)
              {    int m;
                  ch=getchar();
                  s[count]=ch;
                  count=count+1;
                  m= printf("%d",s[i]); }
              while(i>0)
              {   int x;
                  long int p;
                  i=count-1;
                  x=putchar(s[i]);
                  p= printf("%lp",x);
                  if(m==p) {
                      printf("YES"); }
                  else {
                      printf("NO"); } }
	return 0; }