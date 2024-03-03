#include <stdio.h>
#include <stdlib.h>
# include <math.h>
int M(int a ,int b){
    if(a>b) {
        return a; }
    else
        return b; }
int main() {
    int i,n ;
    char num[20];
    scanf ("%d\n",&n) ;
    if  (n==1)  {
        printf ("Yes"); }
        else if (n==2){
            i=0;
            int y=0 ;
            if (num[i]==num[i+1]){
                printf ("No"); }
            else
                printf ("Yes") ; }
        else if (n!=1){
        for (i=0 ;i<n ;i++ ) {
        scanf ("%c\n",&num[i]);
        }int d=0;
            for (i=0 ; i<=n;i++ ){
                int h=M(num[i],num[i+1]) ;
                if (h==num[i]){
                    d=1;
                    y!=0;
                    break ; } }
        if (d==1){
            printf("Yes"); }
        else
        printf ("No"); }
	return 0; }