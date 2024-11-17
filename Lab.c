
// LAB QUESTIONS

// 1.Write a C Program to find area and circumference of circle.

// #include <stdio.h>
// int main(){
//      float c,a;
//      int r;
//      printf("Ente a radius : ");
//      scanf("%d",&r);
//      a=3.14*r*r;
//      c=2*3.14*r;
//      printf("Area of curcal is = %.2f",a);
//      printf("\nCurcumfrence of area is = %.2f",c);
// }

// **************************************************************

// 2.Write a C Program to convert temperature from degree centigrade to Fahrenheit.
// °F = °C × (9/5) + 32

// #include <stdio.h>
// int main(){
//      int c;
//      float f;
//      printf("Enter a centigrade : ");
//      scanf("%d",&c);
//      f = c * 9/5 + 32;
//      printf("degree centigrade to Fahrenheit = %.2f",f);
// }


// *****************************************************

// 3.Write a C Program to show swap of two numbers without using third variable.

// #include <stdio.h>
// int main(){
//      int a,b;
//      printf("Enter a two number : ");
//      scanf("%d%d",&a,&b);
//      a=a+b;
//      b=a-b;
//      a=a-b;
//      printf("after swaping : %d  %d",a,b);
// }


// **********************************************************

// 4.Write a C Program to find greatest in 3 numbers.

// #include <stdio.h>
// int main(){
//      int a,b,c;
//      printf("enter a three number : ");
//      scanf("%d%d%d",&a,&b,&c);
//      if(a>b&&a>c){
//           printf("a is gretest number. %d",a);
//      }
//      else if(b>c&&b>a){
//           printf("b is gretest number. %d",b);
//      }
//      else{
//           printf("c is gretest number. %d",c);
//      }
// }

// **********************************************************

// 5.Write a C Program to find the entered year is leap year or not.

// #include <stdio.h>
// int main(){
//      int year;
//      printf("Enter a year : ");
//      scanf("%d",&year);
//      if(year%4==0){
//           printf("it is a leap year = %d",year);
//      }
//      else{
//           printf("it is not a leap year = %d",year);
//      }
// }

// ***************************************************************

// 6.Write a C Program to display arithmetic operator using switch case. 

// #include <stdio.h>
// int main(){
//      int a,b,c;
//      int operator;
//      printf("enter a two number : ");
//      scanf("%d%d",&a,&b);
//      printf("\n1.add\n2.sub\n3.mul\n4.div\n5.mod");
//      printf("\nenter a choise : ");
//      scanf("%d",&operator);

//      switch (operator)
//      {
//      case 1:
//      c=a+b;
//      // printf("add two number = %d",c);

//           break;
//      case 2:
//      c=a-b;
//      // printf("sub two number = %d",c);
//           break; 
//      case 3:
//      c=a*b;
//      // printf("mul two number = %d",c);
//           break;
//      case 4:
//      c=a/b;
//      // printf("div two number = %d",c);
//           break; 
//      case 5:
//      c=a%b;
//      // printf("mod two number = %d",c);
//           break;     
     
//      default:
//      printf("invalid key !");
//           break;
//      }
//      printf("result two number = %d",c);
// }

// *******************************************************

// 7.Write a C Program to print Fibonacci series up to 100.

// #include <stdio.h>
// int main(){
//      int a=0,b=1,c;

//      printf("%d  %d",a,b);
//      for(int i=2; i<=100-2; i++){
//           c=a+b;
//            printf(" %d",c);
//           a=b;
//           b=c;
         
//      }
// }

// ***********************************************************

// 8.Write a C Program to find whether given no. is prime no. or not.

// #include <stdio.h>
// int main(){
//      int n;
//      printf("enter a number : ");
//      scanf("%d",&n);
//      if(n%2==0){
//           printf("Number is even = %d",n);
//      }
//      else{
//           printf("number is odd = %d",n);
//      }
// }

// ********************************************************

// 9.Write a C Program to display sum of series   1 + 1/2  + 1/3 +……………..+1/n.

// #include <stdio.h>
// int main(){
//      int i,n,sum=0;
//      printf("enter a number : ");
//      scanf("%d",&n);
     
//      printf(" 1 + ");
//      for(i=2; i<=n-1; i++)
//           printf("1/%d +", i);
//      for(i=1; i<=n; i++)
//           sum = sum + i;
//           printf(" 1/%d", n);
//           printf("\nSum = 1/%d", sum + 1/n);

// }

// *********************************************

//  1 + 4 + 9 + 16 + 25 + 36 + 49 + 64 + 81 + 100

// #include <stdio.h>
// int main(){
//      int i,n;
//      printf("enter a number : ");
//      scanf("%d",&n);
     
//      printf(" 1 + ");
//      for(i=2; i<=n-1; i++)
//           printf("%d + ", i*i);
//            printf("%d", n*i);

// }


// ******************************************************

// 10.Write a C Program to print star sequence 1:
// *
// *    *
// *    *    *
// *    *    *    *

// #include <stdio.h>
// int main(){
//      for(int i=1; i<=5; i++){
//           printf("\n");
//           for(int j=1; j<=i; j++){
//                printf("*  ");
//           }
//      }
// }

// ******************************************************

// 11.Write a C Program to print star sequence 2:
//                   *
//             *     *
//       *     *     *
// *     *    *      *

// #include <stdio.h>
// int main(){
//      for(int i=1; i<=5; i++){
//           printf("\n");
//           for(int s=5; s>=i; s--){
//                printf("  ");
//           }
//           for(int j=1; j<=i; j++)
//                printf("* ");
          
//      }
// }

// *******************************************

// 12.Write a C Program to print star sequence 3:


#include <stdio.h>
int main(){
     for(int i=1; i<=5; i++){
          printf("\n");
          for(int s=5; s>=i; s--){
               printf(" ");
          }
          for(int j=1; j<=i; j++){
               printf("* ");
          }
     }
}
   