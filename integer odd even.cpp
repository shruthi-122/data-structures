#include<stdio.h>  
int main()  
{  
    int a[N], i, j = N, temp;  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
    for(i = 0; i <= j; i++)  
    {  
        if(a[i] % 2 != 0)  
        {  
            while(j > i)  
            {  
                j--;  
                if(a[j] % 2 == 0)  
                {  
                    temp = a[i];  
                    a[i] = a[j];  
                    a[j] = temp;  
                    break;  
                }  
            }  
        }  
    }    
    printf("\nAfter re-arranging even and odd elements ...\n");  
    for(i = 0; i < N; i++)  
        printf("%d\n", a[i]);  
    return 0;  
}
