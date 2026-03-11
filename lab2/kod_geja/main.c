#include <stdio.h>
#include <math.h>

// Function to convert decimal to Gray code
unsigned int decimalToGray(unsigned int n) {
    // Formula: (n >> 1) ^ n
    return n ^ (n >> 1);
}

void reverse(char *bin, int left, int right) {
    while (left < right) {
        char temp = bin[left];
        bin[left] = bin[right];
        bin[right] = temp;
        left++;
        right--;
    }
}

// function to convert decimal to binary
char* decToBinary(int n) {
    int index = 0;
	char* bin = (char*) malloc(32 * sizeof(char));

    while (n > 0) {
        int bit = n % 2;
        bin[index++] = '0' + bit;
        n /= 2;
    }
    bin[index] = '\0';

	// Reverse the binary string
	reverse(bin, 0, index-1);
  	return bin;

}

int main() {
    unsigned int decimal = 2;
    unsigned int gray = decimalToGray(decimal);
    int t = pow(2, pow(2, pow(2, 2)));

    printf("Decimal: %d\n", decimal);
    printf("Gray Code: %s\n", decToBinary(gray));
    printf("Tet: %d", t);

    // To print as binary, you would need a custom binary conversion function.
    return 0;
}
