//
// Created by nesic on 24.10.2023.
//

#include <stdio.h>
#include <inttypes.h>
uint64_t a;
int64_t b;


int main()
{
    printf("Hello World!\n");
    return 0;
}

char variables()
{
    //1 byte
    char c = 5;     //Decimal
    char d = 'a';   //ASCII: 97

    //2 bytes, usually 4 bytes
    int i = 040017; //Octal (dec: 19399)   0 ist prefix
    int j = 0x400f; //Hexxadecimal notation    0x ist prefix
    int K = 'a';

    //long 4 byte
    // long long 8 bytes

    signed int s;
    unsigned int u;

    sizeof(int);
    sizeof(j);
    sizeof(a);
    sizeof(b);

    return c;
}
