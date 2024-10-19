#include <Stdio.h>

//program to find the sum and avg  of the given numbers
/*int main(){
    int a,b,c;
    printf("enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nsum of the given numbers is:%d",a+b+c);
    printf("\navg of the given numbers is:%d",(a+b+c)/2);
    return 0;

} 
*/
//program to convert celsius to fahrenheit and vice versa
int main(){
    float a;
    char ch;
    printf("****************************************\n|\tTemperature conversion\t\t|\n========================================\n1.\tFAHRENHEIT TO CELSIUS\n2.\tCELSIUS TO FAHRENHEIT\n****************************************\n\n\t\t\t\tenter ur choice: ");
    scanf("%c",&ch);
    printf("enter the value for conversion : ");
    scanf("%f",&a);
    switch(ch){
        case 'a': printf("the value of %f coverted to celsius is :%f",a,(a-32)*5/9);
        break;
        case 'b': printf("the value of %f converted to fahrenhiet is:%f",a,(9*a/5)+32);
        break;
        default:printf("choose correct choice");
        break;
    }
    return 0;
}