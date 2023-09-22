#include<stdio.h>
#include<cs50.h>
int main(void){


   int vu ;

   do{
     vu = get_int("enter number ");
   }
   while( vu < 1);
      for (int i=0 ; i< vu ; i++){
        for ( int j=0; j< vu ; j++){
            printf("#");
        }
       printf("\n");
      }
}


