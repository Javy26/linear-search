#include <stdio.h>

void display (int[], int);

int average (int[], int);

int LinearSearch(int [], int, int);

void main () ////number 1

{

int Array[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

char Arr[20] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};

float Ary[10] = {1.05f,2.05f,3.05f,4.05f,5.05f,6.05f,7.05f,8.05f,9.05f,10.05f};

int total;

int search;
int num = 1;

int val = 0;
int SVal;


display (Array, 15); ////number 2 and 3

total = average (Array, 15);

printf("\n\n The Average is: %d\n", total); ////number 4 and 5

search = LinearSearch(Array, 15, num); 

printf("\nThe number searching for is at index %d\n", search); ///number 6

printf("Please enter the number you are searching for\n"); ////number 7
scanf("%d", &val);

SVal = LinearSearch(Array, 15, val);

printf("\n The number you entered is at index %d:", SVal); 

printf("The number you are searching for was not found"); 


}

void display (int Array[], int SIZE)

{
int index;

for (index = 0; index < SIZE; index++)

{
printf("%d ", Array[index]);
}

}

int average (int Array[], int SIZE)

{
int sum = 0;
int avg = 0;
int index;

for (index = 0; index < SIZE; index++)

{
sum = sum + Array[index];

avg = sum / SIZE;

}



return avg;
}

int LinearSearch(int Array[], int SIZE, int SValue)

{

int index = 0 ;

while (index < SIZE)

{
if (Array[index] == SValue)

{
return index;
}

index++;

}

return -1;

}