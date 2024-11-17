#include <stdio.h>
int main(){
     int m1,m2,m3,m4,m5;
     float p;
     printf("enter a marks of five subject : \n");
     scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
     p=(m1+m2+m3+m4+m5)/5;
     printf("Pracentage = %.2f\n",p);

     if(p>80)
     printf("Grade super ");
     else if(p>70)
     printf("Grade A");
     else if (p>60)
     printf("Grade B");
     else if(p>50)
     printf("Grade c");
     else
     printf("Grade F");
    
}