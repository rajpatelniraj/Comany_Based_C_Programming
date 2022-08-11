// 	Find the Sum of an A. P. Series

#include <stdio.h>

int main() {
    
    int a, n, d, tn, i;    //Variable Declaration
    int sum = 0;    //Sum declaration and initialization
    
    printf("Enter First Number of an A.P Series:\n");
    scanf("%d", &a);           //First element initialization
    
    printf("Enter the Total Numbers in this A.P Series:\n");
    scanf("%d", &n);           //total number of elements initialization
    
    printf("Enter the Common Difference:\n");
    scanf("%d", &d);           //Common difference initialization
    
    sum = (n * (2 * a + (n - 1) * d)) / 2;    //total sum Formula
    tn = a + (n - 1) * d;                    //Last term formula
    
    printf("\nThe Sum of Series A.P. :\n ");
    for(i = a; i <= tn; i = i + d)
    {
        if(i != tn)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
    }
    printf("\n");
    
    return 0;
}

