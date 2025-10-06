#include <assert.h>
#include <stdio.h>
#include "sum.h"

void test_sum() {
    assert(sum(2, 3) == 5);
    assert(sum(-1, 1) == 0);
    assert(sum(0, 0) == 0);
    assert(sum(-5, -7) == -12);
    assert(sum(100, 200) == 300);
    printf("All tests passed!\n");
}

int main() {
    test_sum();
    return 0;
}
