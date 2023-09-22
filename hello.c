#include<stdio.h>
#include<cs50.h>
int main(void){


   int vu ;

   do{
     vu = get_int("enter number ");
   }
   while( vu < 1);
      for (int i=0 ; i< vu ; i++){
printf("#");
      }
      printf("\n");
}


