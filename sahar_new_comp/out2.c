
#include <stdio.h>
#include <stdlib.h>
#include "arch/cisc.h"
int main() {
START_MACHINE;
JUMP(PROGRAM_START);
#include "arch/char.lib"
#include "arch/io.lib"
#include "arch/scheme.lib"
#include "arch/math.lib"
#include "arch/string.lib"
#include "arch/system.lib"
ERROR:
HALT;
PROGRAM_START:



STOP_MACHINE;
HALT;
}

