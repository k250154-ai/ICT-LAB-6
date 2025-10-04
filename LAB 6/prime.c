#include <stdio.h>
int main() {
   int num , select,flag = 0;

   printf("=====Select=====");
   printf("\n1- Print Prime Numbers\n 2- Check A Number.\n Select:  ");
   scanf("%d", &select);
   if(select == 1) {
      int num1;
      printf("Enter the number: ");
      scanf("%d", &num1);

    for (int j = 1; j < num1; j++)
    {
        for(int i=2 ; i < j/2 ; i++) {
            if(j%i == 0) {
                // printf("\n%d is not a prime number\n", num1);
                //  flag = 1;
                break;
                }
                else {
                    printf("\n%d is a prime number\n", j);
        }

   }
        
    }
    

      return 0;
   } 

   printf("Enter a number: ");
   scanf("%d", &num);

   for(int i=2 ; i < num/2 ; i++) {
      if(num%i == 0) {
         printf("%d is not a prime number", num);
         flag = 1;
         break;
      }
   }

   if(flag == 0) {
      printf("%d is a prime number", num);
   }
}