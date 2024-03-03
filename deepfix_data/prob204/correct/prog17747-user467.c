#include <stdio.h>
#include <stdlib.h>
int main() {
               long int count=0;
               long int n;
               scanf("%ld",&n);
               int i=0;
               int g;
               int s[i];
               int ch;
               ch=getchar();
               int c;
               c=(n/10);
               g=n%10;
               count=count+1;
                   while(c>0) {
                   count=count+1;
                   c=(n/10);
                    c=n-g;
                   if(c<10) {
                       break; } }
              while(ch!=EOF) {
                  long int m;
                  ch=getchar();
                  s[count]=ch;
                  count=count+1;
                  m = putchar(s[i]); }
              while(i>0)
              {   long int x;
                  long int m=0;
                  i=count-1;
                  x = putchar(s[i]);
                  if(m==x) {
                      printf("YES"); }
                  else {
                      printf("NO"); } }
	return 0; }