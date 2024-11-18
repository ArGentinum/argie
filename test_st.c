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
//c program to convert decimal numbers to their binary values and vice versa
int main() {
    char a[20],b[20];
    int i,x,y,j,zero;
    printf("1.decimal to binary conversion\n2.binary to decimal conversion\n\nenter ur choice:");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("enter the number: ");
            scanf("%d",&y);
        for(i=0;y!=0;++i,y=y/2){
            a[i]=(y%2==0?'0':'1');
        }
        a[i]='\0';
        for(j=(strlen(a)-1);j>=0;--j){
            printf("%c",a[j]);
            
        }
         
        break;

        case 2 :
        zero=0;
        y=0;
        printf("enter the binary number: ");
        scanf("%s",&a);
        for(i=(strlen(a)-1);i>=0;--i,++zero){
            if(a[i]=='0')
            continue;
        if(a[i]=='1')
         y+=1<<zero;
        }
        printf("the decimal value is:%d",y);
        break;
        
        default :
        printf("enter the correct choice");
        break;
    }
    return 0;
}

