#include <stdio.h>
int main(){
     int A, B, C; 
    printf("Enter the numbers A, B and C: "); 
    scanf("%d %d %d", &A, &B, &C); 
    if (A >= B && A >= C) 
        printf("the largest number is %d.", A); 
  
    if (B >= A && B >= C) 
        printf("the largest number is %d.", B); 
  
    if (C >= A && C >= B) 
        printf("the largest number is %d.", C); 

  return 0;
}
