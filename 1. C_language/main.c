#include <tinyara/config.h>
#include <apps/shell/tash.h>
#include <stdio.h>
#include "C_Basic.h"



int main(int argc, FAR char *argv[])
{

	tash_cmd_install("C", C_main, TASH_EXECMD_SYNC);

	return 0;
}


