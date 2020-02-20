#include "DecodeCode.h"


mipsinstruction decode(int value)
{
	mipsinstruction instr;

	// TODO: fill in the fields
	instr.funct = value & 0x0000003F;
    if (value >> 15 & 0x00000001){
        instr.immediate = value | 0xFFFF0000;
    } else {
    	instr.immediate = value & 0x0000FFFF;
    }

	instr.rd = value >> 11 & 0x0000001F;
	instr.rt = value >> 16 & 0x0000001F;
	instr.rs = value >> 21 & 0x0000001F;
	instr.opcode = value >> 26 & 0x0000003F;

	return instr;
}


