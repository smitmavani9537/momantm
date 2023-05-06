#include<stdio.h>
#include<conio.h>
main()
{
    int d;
    clrscr();

    printf("enter value d=");
    scanf("d",&d);
    printf("press to 1 sunday ");
    printf("\npress to 2 monday");
    printf("\npress to 3 tuesday");
    printf("\npress to 4 wednesday");
    printf("\npress to 5 thursday");
    printf("\npress to 6 friday");
    printf("\npress to 7 saturday");
    printf("\nenter your day");
    scanf("%d",&d);
    switch(d)
    {
      case 1 :
		 printf("sunday");
		 break;
      case 2 :
		 printf("monday");
		 break;
      case 3 :
		 printf("tuesday");
		 break;
      case 4 :
		 printf("wednesday");
		 break;
      case 5 :
		 printf("thursday");
		 break;
      case 6 :
		 printf("firday");
		 break;
      case 7 :
		 printf("saturday");
		 break;
      default :
		 printf("plz enter valid choice!");
		 break;
      }
      getch();

}