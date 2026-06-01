#include<stdio.h>
int main () {
    int a, b, choice;
    int i = 5;

   while( i <= 5)

   {
    printf("%d\n", i);
    printf("\n====CALCULATOR MENU====\n    Author-prince kumar\n");
   

   
   printf("1. additions (+)\n");
   printf("2. subtractions (-)\n" );
   printf("3. multiply (*)\n" );
   printf("4. division(/)\n");
   printf("5 . Exit\n");

   printf("Enter your choice \n");
   scanf("%d", &choice);

   if(choice == 5)
   {
    printf("program Exit...\n thank u for using 😊\n");
    
   
   
  
   }
   printf("Enter a\n");
   scanf("%d", &a);
   printf("Enter b\n");
   scanf("%d", &b);
   switch (choice)
   {
   case 1:
   printf("Result = %d\n", a + b);
   break;
   case 2:
   printf("Result = %d\n",a - b);
   break;
   case 3: 
   printf("Result = %d\n",a * b);
   break;
   case 4:
   printf("Result = %.2f\n", a / b);
   break;
   

   
   
   default:
   printf("invaild number !");
   }
   
   }
    return 0 ;
}