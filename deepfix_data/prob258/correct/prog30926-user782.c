#include <stdio.h>
#include <stdlib.h>
# include <math.h>
int M(int a ,int b,int c){
    if(a>=b) {
        if (a>=c){
            return a; }
        else
            return c; }
    else if(b>=a){
        if (b>=c){
            return b ; }
    }else
            return c ; }
int main() {
    int i,n ;
    char num[20];
    scanf ("%d\n",&n) ;
    if  (n==1)  {
        printf ("Yes");
    }else if (n==2){
            i=0;
            if (num[i]==num[i+1]){
                printf("Yes"); }
            else
                printf ("No");
    }else if (n!=1 && n!=2){
    for (i=0 ;i<n ;i++ ) {
        scanf ("%c\n",&num[i]); }
    for (i=1 ; i<=n-2;i++ ){
    int h=M(num[i-1],num[i],num[i+1]) ;
    if (h==num[i]){
        break ; }
    else
        printf ("Yes"); }
    if (i<n-1 ){
    printf("No"); } }
	return 0; }