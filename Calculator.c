#include <stdio.h>
int main(){
   char Op;
   float num1, num2, res= 0;
   printf("\n Enter any one operator like +, -, *, /: ");
   scanf("%c", &Op);
   printf("Enter the values of Operands num1 and num2 \n : ");
   scanf("%f%f", &num1, &num2);
   switch(Op){
      case '+': res = num1 + num2;
         break;
      case '-': res = num1 - num2;
         break;
      case '*': res = num1 * num2;
         break;
      case '/': res = num1 / num2;
         break;
      default: printf("\n Invalid Operator ");
   }
   printf("The value = %.1f", res);
   return 0;
}