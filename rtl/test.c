#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t base_address = 0x90000000UL;

    printf("Base Address: 0x%X\n", base_address);

    for (int i = 0; i < 10; i++)
    {
        base_address += 4; // Increment base address by 4
        printf("Address %d: 0x%X\n", i + 1, base_address);
    }

    return 0;
}
