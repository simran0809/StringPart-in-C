#include<stdio.h>


int main(){
    char str[10];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // stdin is standard input 
   // Using fgets instead of gets 
   //gets allow to enter multi-word .
   
   printf("You entered : %s", str);
   
   int array[20]; //data_type var[size]
   printf("%d", sizeof(array)); //size of int 4, float 4 , double 8 , long long 8 , long 4, char 1,
   
   // size of int 4*array is 80 output
   
   // INDEXING OF ARRAY 
   int array_name[4] = {10,20,30,40}; //datatype array_name[size];
   int arey = array_name[0];// datatype var = array_name[index];
   int st = array_name[3];
   // Print the value
    printf("The value at index is: %d\n", arey);
    printf("index is:%d\b " ,st);
   
   
   
   return 0;
   
   
}