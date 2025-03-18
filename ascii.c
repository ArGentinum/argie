//program to find ascii values of characters and vice versa
#include <stdio.h>
void main(){
    char a,ch;
    char x='N',y;
    int b;
    printf("\na.ascii to char values converter\nb.char to ascii values converter\nenter ur choice:");
    scanf("%c",&ch);
    switch(ch){
        case 'a': 
        for(y=x;y=='N';y=x){
        printf("enter the number:");
        scanf("%d",&b);
    printf("\n ASCII value is:%c",b);
    printf("\n\ndo u wish to exit the terminal?\nclick Y if yes\nclick N if no\n\nenter ur choice:");
    scanf(" %c",&x);
    }
        break;

        case 'b':
    for(y=x;y=='N';y=x){
        printf("enter the character: ");
    scanf(" %c",&a);
    printf("\n ASCII value is:%d",a);
    printf("\n\ndo u wish to exit the terminal?\nclick Y if yes\nclick N if no\n\nenter ur choice:");
    scanf(" %c",&x);
    }
    break;

    default :printf("enter the correct choice");
    }
}
