#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");  // Print spaces
        }
        for(j = 1; j <= (2*i-1); j++) {
            printf("*");  // Print stars
        }
        printf("\n");
    }
    return 0;
}


/* OutPut

Enter number of rows: 5
    *    
   ***   
  *****  
 ******* 
*********


*/