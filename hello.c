#include<stdio.h>
#include<cs50.h>
int main(void){
   int vu = -1;
   while( vu < 1){
    vu = get_int("enter number \n");
   }
      for (int i=0 ; i< vu ; i++){
printf("#");
      }
      printf("\n");
}


