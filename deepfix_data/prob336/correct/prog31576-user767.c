#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf ("%d %d %d",&a ,&b, &c);
       if
       ((a==0)||(b==0) ||(c==0))
       printf ("Cannot form a Triangle");
       else
       if
       ((a+b>c) &&( b+c>a) && (a+c>b))
           if
           ((a*a+b*b>c*c) &&(b*b+c*c>a*a) &&(a*a+c*c>b*b))
           printf ("triangle is obtuse");
               if
               ((a*a+b*b<c*c) &&(b*b+c*c<a*a) &&(a*a+c*c<b*b))
               printf ("triangle is accute");
               else
               printf ("triangle is right angled trianle");
	return 0; }