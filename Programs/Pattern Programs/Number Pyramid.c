#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");  // Print spaces
        }
        for(j = 1; j <= i; j++) {
            printf("%d ", j);  // Print numbers
        }
        printf("\n");
    }
    return 0;
}


/* output

Enter number of rows: 5
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5


*/