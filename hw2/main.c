#include <stdint.h>
#include <stdio.h>
#include <string.h>

extern uint64_t get_cycles();
extern uint64_t get_instret();
extern int start(int a);

/*
 * Taken from the Sparkle-suite which is a collection of lightweight symmetric
 * cryptographic algorithms currently in the final round of the NIST
 * standardization effort.
 * See https://sparkle-lwc.github.io/
 */
int main(void)
{
    /* measure cycles */
    uint64_t instret = get_instret();
    uint64_t oldcount = get_cycles();
    int a = 0x3F99999A;
    printf("Input FP32:%x\n", a);
    int ans = start(a);
    printf("Output bfloat16:%x\n", ans);
    uint64_t cyclecount = get_cycles() - oldcount;

    printf("cycle count: %u\n", (unsigned int) cyclecount);
    printf("instret: %x\n", (unsigned) (instret & 0xffffffff));

    return 0;
}
