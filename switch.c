// #include <stdio.h>

// int main(){
//      int day;

//      printf("Enter a day of week : ");
//      scanf("%d",&day);

//      switch (day)
//      {
//           case 1:
//           printf("Monday");
//           break;
//           case 2:
//           printf("Tuesday");
//           break;
//           case 3:
//           printf("Wednesday");
//           break;
//           case 4:
//           printf("Thursday");
//           break;
//           case 5:
//           printf("Friday");
//           break;
//           case 6:
//           printf("Sturday");
//           break;
//           case 7:
//           printf("Sunday");
//           break;
//      default:
//      printf("Wrong input");
//           break;
//      }
// }


// **************************************************************

#include <stdio.h>

int main(){
     int month;
     printf("Enter a name of month : ");
     scanf("%d",&month);

     switch (month)
     {
     case 1:
     printf("January");
          break;
     case 5:
     printf("May");
          break;
     
     case 2:
     printf("Febuary");
          break;
     
     case 3:
     printf("March");
          break;
     case 4:
     printf("April");
          break;
     case 6:
     printf("Jun");
          break;

     case 7:
     printf("July");
          break;

     case 8:
     printf("August");
          break;
     case 9:
     printf("September");
          break;

     case 10:
     printf("October");
          break;

     case 11:
     printf("November");
          break;

     case 12:
     printf("December");
          break;
     
     default:
     printf("Wrong input");
          break;
     }
}