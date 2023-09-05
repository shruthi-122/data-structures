#include <stdio.h>
#include <math.h>

void decimalToBinary(int num) {
    long long int binNumber = 0;
    int power = 0;
    
    while (num > 0) {
        int rem = num % 2;
        long long int temp = pow(10, power);
        binNumber += rem * temp;
        power++;
        num /= 2;
    }
    
    printf("%lld", binNumber);
}

int main() {
   int num = 9;
   decimalToBinary(num);
   return 0;
}


