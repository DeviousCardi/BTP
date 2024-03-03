#include <stdio.h>
#include <stdlib.h>
# include <math.h>
int M(int a ,int b ,int c){
    if(a>=b) {
        if (b>c){
            return a; }
    }else
    return -1; }
int main() {
    int i,n ;
    char num[20];
    scanf ("%d\n",&n) ;
    if  (n==1)  {
        printf ("Yes"); }
    else if (n==2){
            i=0;
            for (i=0 ;i<n ;i++ ) {
        scanf ("%c\n",&num[i]); }
            if (num[i]==num[i+1]){
                printf ("No"); }
            else
                printf ("Yes") ; }
        else if (n!=1 && n!=2){
        for (i=0 ;i<n ;i++ ) {
        scanf ("%c\n",&num[i]);
        }int d=0;
            for (i=1 ; i<=n;i++ ){
                int h=M(num[i-1],num[i],num[i+1]) ;
                if(h!=-1) {
                    d=1;
                    break; } }
        if (d==1){
            printf("Yes"); }
        else
        printf ("No"); }
	return 0; }