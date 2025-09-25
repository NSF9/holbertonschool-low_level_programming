#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc,char *argv[])
{
     int num1, num2;

 char* Op;


 if (argc != 4)
 {
     printf("Error\n");
     exit(98);
 }

 num1 = atoi(argv[1]);
 num2 = atoi(argv[3]);
 Op = argv[2];

 if (get_op_func(Op) == NULL)
 {
     printf("Error\n");
     exit(99);
 }

 if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
 {
     printf("Error\n");
     exit(100);
 }

 printf("%d\n", get_op_func(Op)(num1, num2));

 return (0);
}
