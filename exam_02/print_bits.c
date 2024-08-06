#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i;

    i = 7;
    while(i >= 0)
    {
        if (octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

// // just a compact rewrite
// void	print_bits2(unsigned char octet)
// {
//     int i;

//     i = 7;
//     while(i >= 0)
//     {
//         (octet & (1 << i) ? write(1, "1", 1) : write(1, "0", 1));
//         i--;
//     }
// }

// int main(void)
// {
//     unsigned char value;

//     // Example 1: Print binary representation of 2
//     value = 2;
//     write(1, "Binary of 2: ", 13);
//     print_bits(value);
//     write(1, "\n", 1);  // Adding newline for readability
//     print_bits2(value);
//     write(1, "\n", 1);  // Adding newline for readability

//     // Example 2: Print binary representation of 255
//     value = 255;
//     write(1, "Binary of 255: ", 15);
//     print_bits(value);
//     write(1, "\n", 1);  // Adding newline for readability
//     print_bits2(value);
//     write(1, "\n", 1);  // Adding newline for readability

//     // Example 3: Print binary representation of 0
//     value = 0;
//     write(1, "Binary of 0: ", 13);
//     print_bits(value);
//     write(1, "\n", 1);  // Adding newline for readability
//     print_bits2(value);
//     write(1, "\n", 1);  // Adding newline for readability

//     // Example 4: Print binary representation of 128
//     value = 128;
//     write(1, "Binary of 128: ", 15);
//     print_bits(value);
//     write(1, "\n", 1);  // Adding newline for readability
//     print_bits2(value);
//     write(1, "\n", 1);  // Adding newline for readability

//     return 0;
// }