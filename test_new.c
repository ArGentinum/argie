#include <stdio.h>
#include <string.h>
void main(){
    char a[100],ch;
    int i,j=0;
    printf("a.one's complement of a binary number.\nb.two's complement of a binary number\n\nenter ur choice: ");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        printf("enter the binary number:");
        scanf("%s",a);
        for(i=0;i<strlen(a);++i){
            if(a[i]=='0'||a[i]=='1'){
            a[i]=(a[i]=='0'?'1':'0');
            }
        
            else{
            printf("\nenter correct binary representation");
            ++j;
            break;
            }
            
        }
        if(j==0)
        printf("\none`s compliment is:%s",a);
        
        break;
        case 'b':
        printf("enter the binary number:");
        scanf("%s",a);
        j=strlen(a)-1;
        for(i=j;i>=0;--i){
            if(a[i]=='1'){
                for(i=i-1;i>=0;--i){
                    a[i]=(a[i]=='0'?'1':'0');
                }
                break;
            }
            
        }
        printf("2's compliment is:%s",a);
        break;
        
        default :
        ;
        break;
    }
    
    
}
