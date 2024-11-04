// program only works for decimal values upto 1023 . why?
#include <stdio.h>
#include <string.h>
/*
int main(){
     int a,b,c=1,cnt;
     int d;
        printf("\nenter the number: ");
    scanf("%d",&a);
    for(cnt=0;(a!=0);a=a/2,++cnt){
        if(cnt==0){
        b=a%2;
        d=b;
    }
    if(cnt>0){
        b=c*10*(a%2)+d;
        d=b;
        c*=10;
    }
    }
    printf("\n%d",d);
    
    return 0;
}
*/

void main(){
    char b[20];
    int i,j;  
    puts("enter the number:");
    gets(b);
    int c=strlen(b);
    for(i=0;i<strlen(b);++i,--c){
        for(j=0;j<c;++j){
            printf("%c",b[j]);
        }
        printf("\n");
    }
    }

