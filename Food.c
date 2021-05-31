#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Enter a random number from 1 to 5 for food items:");
  int choice=0;
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
      printf("Food item-Burger\nPrice-Rs129");
      break;
    case 2:
      printf("Food item-Sandwich\nPrice-Rs  149");
      break;
    case 3:
      printf("Food item-pizza\nPrice-Rs 239");
      break;
    case 4:
      printf("Food item-pasta\nPrice-Rs 179");
      break;
    case 5:
      printf("Food item -French Fries\nPrice-Rs 99");
      break;
    default:
      printf("Invalid choice");
  }
  return 0;
}
