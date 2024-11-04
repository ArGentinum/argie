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
int main() {
    char a[20],b[20];
    int i,x,y,j;
    printf("1.decimal to binary conversion\n2.binary to decimal conversion\n\nenter ur choice:");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("enter the number: ");
            scanf("%d",&y);
        for(i=0;y!=0;++i,y=y/2){
            a[i]=(y%2==0?'0':'1');
            printf("%c",a[i]);
        }
        a[i]='\0';
        for(j=(strlen(a)-1);j>=0;--j){
            printf("%c",a[j]);
            
        }
        
        break;
        
        default :
        ;
        break;
    }
    

    return 0;
}

