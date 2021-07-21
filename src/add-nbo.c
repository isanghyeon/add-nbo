//
// Created by 이상현 on 2021/07/21.
//

#include <stdio.h>
#include "add-nbo.h"

// thousand.bin => 0x3e8,
// five-hundred.bin => 0x1f4
uint32_t add_nbo(uint32_t first_input, uint32_t second_input) {
    uint32_t first_input_binary[4] = {
            (first_input & 0xFF000000) >> 24,
            (first_input & 0x00FF0000) >> 8,
            (first_input & 0x0000FF00) << 8,
            (first_input & 0x000000FF) << 24
    };
    uint32_t second_input_binary[4] = {
            (second_input & 0xFF000000) >> 24,
            (second_input & 0x00FF0000) >> 8,
            (second_input & 0x0000FF00) << 8,
            (second_input & 0x000000FF) << 24
    };

    uint32_t returnInputSum = 0;
    uint32_t tmp1 = 0, tmp2 = 0;

    for (int i = 0; i < 4; i++) {
        tmp1 |= first_input_binary[i];
        tmp2 |= second_input_binary[i];
    }
    returnInputSum = tmp1 + tmp2;
    // 1000(0x3e8) + 500(0x1f4) = 1500(0x5dc) => 출력
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", tmp1, tmp1, tmp2, tmp2, returnInputSum, returnInputSum);
    return 0;
}
