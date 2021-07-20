#include <stdio.h>
#include <stdint.h>
#include "add-nbo.h"

int main(int argc, char *argv[]) {
    FILE *fp_first;
    FILE *fp_second;

    // ./add-nbo thousand.bin five-hundred.bin => 실행

    fp_first = fopen(argv[1], "rb");
    fp_second = fopen(argv[2], "rb");

    uint32_t first_input, second_input;

    fread(&first_input, sizeof(first_input), 1, fp_first);
    fread(&second_input, sizeof(second_input), 1, fp_second);
    add_nbo(first_input, second_input);

    fclose(fp_first);
    fclose(fp_second);
    return 0;
}

/*
syntax : add-nbo <file1> <file2>
sample : add-nbo a.bin c.bin

# example
$ echo -n -e \\x00\\x00\\x03\\xe8 > thousand.bin
$ echo -n -e \\x00\\x00\\x01\\xf4 > five-hundred.bin
$ ./add-nbo thousand.bin five-hundred.bin
1000(0x3e8) + 500(0x1f4) = 1500(0x5dc)

 */