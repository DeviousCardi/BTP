#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[1000],nu=0,i=0,count=0;
     long int num;
    float c;
    scanf("%ld",&num);
    do {
        c=num/10;
        count++;
    }while(c>1) ;
    for(i=0;i<count;i++)
        a[i]=num%10;
    for(i=0;i<count/2;i++) {
        if(a[i]==a[count-(i+1)])
          nu=nu+1; }
    if(nu==count/2)
     printf("YES");
    else
     printf("NO");
	return 0; }