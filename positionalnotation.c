#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFF 256

typedef struct{
  int number;
  int weight;
} Weight;

int main(void){
  char *num = malloc(BUFF);
  int output;
  size_t i;

  Weight tabel[] = {
    {1, 100},
    {2, 100},
    {3, 100},
    {4, 100},
    {5, 100},
    {6, 100},
    {7, 100},
    {8, 100},
    {9, 100},
    {10, 100}
  };

  printf("Enter numbers: ");
  fgets(num, BUFF, stdin);   
 // printf(" before strlen: %ld\n", strlen(num));
  if (sizeof(num) == BUFF){
    num = realloc(num, BUFF * 2);
  }
  
  for (i = 0; i < strlen(num); i++){
    //delete new line 
    if (i == 0){
      size_t size = strlen(num);
      num[size - 1] = '\0';
    }
    output = num[i] - '0'; //char to number
    //printf("i: %ld\n", i);
    //printf("strlen: %ld\n", strlen(num));
    printf("%d\n", output * tabel[output].weight);
  }

  free(num);
  return 0;
}
