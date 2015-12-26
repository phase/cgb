#include "types.h"
class MMU {
    public:
        void write_byte(int, byte);
        void write_word(int, word);
        byte read_byte(int);
        word read_word(int);
}

void MMU::write_byte(int address, byte) {
    
}

void MMU::write_word(int address, word) {
    
}

byte MMU::read_byte(int address) {
    return 0;
}

word MMU::read_word(int address) {
    return 0;
}