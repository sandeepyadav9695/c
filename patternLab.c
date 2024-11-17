// ***********1***********
// #include <stdio.h>
// int main(){
//      for (int i = 1; i <= 5; i++)
//      {
//           printf("\n");
//           for (int j = 1; j <= i; j++)
//           {
//               printf("%d\t",j);
//           }
          
//      }
     
// } 

// output
// 1
// 1       2
// 1       2       3
// 1       2       3       4
// 1       2       3       4       5

// *****************2************************

// #include <stdio.h>
// int main(){
//      for (int i = 1; i <= 5; i++)
//      {
//           printf("\n");
//           for (int j = 1; j <= i; j++)
//           {
//               printf("%d\t",i);
//           }
          
//      }
     
// } 

// output
// 1
// 2       2
// 3       3       3
// 4       4       4       4
// 5       5       5       5       5



// **********************3*******************************

// #include <stdio.h>
// int main(){
//      for(int i=1; i<=5; i++){
//           printf("\n");
//           for(int j=5; j>=i; j--)
//                printf("*\t");
          
//      }
// }

// output
// *       *       *       *       *
// *       *       *       *
// *       *       *
// *       *
// *

// ***************************4***********************


// #include <stdio.h>
// int main(){
//      int a=1;
//      for(int i=1; i<=5; i++){
//           printf("\n");
//           for(int j=1; j<=i; j++)
//                printf("%d\t",a++);
          
//      }
// }

// output
// 1
// 2       3
// 4       5       6
// 7       8       9       10
// 11      12      13      14      15

// ***********************5*******************************
// #include <stdio.h>
// int main(){
//      int a=65;
//      for(int i=1; i<=5; i++){
//           printf("\n");
//           for(int j=1; j<=i; j++)
//                printf("%c\t",a++);
//                a=65;
          
//      }
// }

// output

// A
// B       C
// D       E       F
// G       H       I       J
// K       L       M       N       O

// ***************************6****************************

// int main(){
//      int j;
//      for(int i=1; i<=5; i++){
//           printf("\n");
//           for(j=1; j<=i; j++)
//                printf("%d\t",j);
          
//      }
// }

// output
// 1
// 1       2
// 1       2       3
// 1       2       3       4
// 1       2       3       4       5

// ******************************7*******************

// int main(){
//      int a=65;
//      for(int i=1; i<=5; i++){
//           printf("\n");
//           for(int j=1; j<=i; j++)
//                printf("%c\t",a++);
//                a=65;
          
//      }
// }

// output

// A
// A       B
// A       B       C
// A       B       C       D
// A       B       C       D       E



// ********************************8******************
// #include <stdio.h>
// int main(){
//      int i,j,k;
//      for(i=1; i<=5; i++){
//            printf("\n");
//           for(j=1; j<=i; j++){
//            printf("%d\t", k%2);
//             k++;
//            }          
//      }
// }

// output

// 0
// 1       0
// 1       0       1
// 0       1       0       1
// 0       1       0       1       0

// ***********************************9********************

// #include <stdio.h>
// int main(){
// int i,j,a=65;
// for(i=1; i<=5; i++){
//        printf("\n");
//      for(int k=i; k<=5; k++)
//      printf("  ");
//      for(j=1; j<=i; j++){
//      printf("%c   ",a++);
//      }
//     a= a-1;
   
// }
// }

// output

//           A   
//         A   B   
//       B   C   D   
//     D   E   F   G   
//   G   H   I   J   K


// *******************************

#include <stdio.h>
int main(){
     int i,j,a=5,s;
     for(i=1; i<=5; i++){
          printf("\n");
          for(s=1; s<=i; s++)
          printf("  \t");
          for(j=5; j>=i; j--)
          printf("%d\t",j);
     
     }
     for(i=1; i<=4; i++){
          printf("\n");
          for(s=5; s>=i+1; s--)
          printf(" \t");
          for(int j=1; j<=i+1; j++)
          printf("%d\t",a--);
          a=5;
     }

}

// output

     //    5       4       3       2       1
     //            5       4       3       2
     //                    5       4       3
     //                            5       4
     //                                    5
     //                            5       4
     //                    5       4       3
     //            5       4       3       2
     //    5       4       3       2       1


// ********************************************************

