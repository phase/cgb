#include "types.h"
class Z80 {
    public:
        byte clock_m = 0;
        byte clock_t = 0;
        byte reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
        word pc = 0, sp = 0
        byte ins_m = 0, ins_t = 0;
        // opcodes
        void nop(void); //0x00
        
};

void Z80::nop(void) {
    ins_m = 1;
    ins_t = 4;
}