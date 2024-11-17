// #include <stdio.h>
//  int sum(int a);

//  int main(){
//      int a,r;
//      printf("Enter a number : ");
//      scanf("%d",&a);
//      r=sum(a);
//      printf("sum of number = %d",r);
//  }
//  int sum(int n){
     
//      if(n>0){
//      return n+sum(n-1);
//      }
//      else
//      return 0;
//  }

// ********************************

// #include <stdio.h>
// int fact(int );
// int main(){
//      int a,r;
//      printf("enter a number : ");
//      scanf("%d",&a);
//      r=fact(a);
//      printf("Factorial of = %d",r);

// }
// int fact(int n){
//      if(n>0){
//           return n*fact(n-1);
//      }
//      else
//      return 1;
// }

// *************************

// #include <stdio.h>
// int rev(int);
// int b,sum=0;
// int main(){
//      int a,r;
//      printf("Enter a number : ");
//      scanf("%d",&a);  
//      r=rev(a);
//      printf("rev of number : %d",r);

// }
// int rev(int n){
//      if(n>0){
//           b=n%10;
//           sum=sum*10+b;
//           rev(n/10);
          
//      }
//      else
//     return sum;
// }