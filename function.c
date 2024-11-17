//****************** */ no  argument no return type************
// #include <stdio.h>
// void sum(void);
// int main(){
//      sum();

// }
// void sum(void){
//      int a,b,c;
//      printf("Enete a two no");
//      scanf("%d%d",&a,&b);

//      c=a+b;
//      printf("sum =%d",c);
// }
 
//***********************************************  

// #include <stdio.h>
// void prime(void);
// int main(){
//      prime();

// }
// void prime(void)
// {
//      int a,f=0,i;
//      printf("enter a  no : ");
//      scanf("%d",&a);
//      for(i=1;i<=a;i++)
//           if(a%i==0)
//                f++;
          
     
//      if(f==2)
//      printf("prime");
     
//      else
//      printf("not prime");
// }


// *******************************************
// #include <stdio.h>
// void prime(void);
// int main(){
//      prime();

// }
// void prime(void)
// {
//      int a,f=1,i;
//      printf("enter a  no : ");
//      scanf("%d",&a);
//      for(i=1;i<=a;i++)
//          f=f*i;
//      printf("factorial no is = %d",f);
// }

// ********************with argument no return type***************************

// #include <stdio.h>

// void sum(int , int );
// int main(){
//      int a,b;
//      printf("enter two number : ");
//      scanf("%d %d",&a,&b);
//      sum(a,b);

// }

// void sum(int c, int d){
//      int e;
//      e=c+d;
//      printf("sum of two number is = %d",e);
// }

// ******************************************

// #include <stdio.h>
// void prime(int);
// int main(){
//      int a;
//      printf("enter a no : ");
//      scanf("%d",&a);
//      prime(a);
// }
// void prime(int b){
//      int i,f=0;
//      for(i=1; i<=b; i++){
//           if(b%i==0)
//           f++;
//      }
//      if(f==2)
//      printf("prime");
//      else
//      printf("not prime");
// }

// ***************************************************
// #include <stdio.h>
// void fact(int a);
// int main(){
//      int a;
//      printf("Enter a number : ");
//      scanf("%d",&a);
//      fact(a);
// }
// void fact(int b){
//      int i,fact=1;
//      for(i=1;i<=b;i++){
//           fact=fact*i;
//      }
//      printf("the factorial no is = %d",fact);
// }

// ******************no argument with return type********************


// #include <stdio.h>
// int prime(void);
// int main(){
//      int r;
//      r=prime();
//      if(r==2)
//      printf("prime");
//      else
//      printf("not prime");
// }

// int prime(void){
//      int i,f=0,n;
//      printf("enter a number : ");
//      scanf("%d",&n);
//      for(i=1;i<=n;i++)
//      if(n%i==0)
//      f++;
//      return f;
// }

// ***********************************************************

// #include <stdio.h>
// int fact(void);
// int main(){
//      int r;
//      r=fact();
//      printf("factorial ni id = %d",r);
// }
// int fact(void){
//      int n,i,fact=1;
//      printf("Enter a no : ");
//      scanf("%d",&n);
//      for(i=1;i<=n;i++)
//      fact*=i;
//      return fact;
// }

// **************with argument and with return type*******************

// #include <stdio.h>

// int prime(int a);
// int main(){
//      int n,r;
//      printf("Enter a number : ");
//      scanf("%d",&n);
//     r= prime(n);    
//      if(r==2)
//      printf("prime");
//      else
//      printf("not prime");
// }
// int prime(int b){
//      int i,f=0;
//      for(i=1;i<=b;i++)
//      if(b%i==0)
//      f++;
//      return f;
// }

// ***********************************************

// #include <stdio.h>

// int fact(int a);
// int main(){
//      int r,n;
//      printf("Enter a no : ");
//      scanf("%d",&n);
//      r = fact(n);
//      printf("the factorial no is = %d",r);
// }
// int fact(int b){
//      int i,fact=1;
//      for(i=1;i<=b;i++)
//      fact*=i;
//      return fact;
// }