#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
   FILE *fs;
   fs = fopen("SORRY\ DARWIN.txt", "w");
   fprintf(fs, "I AM SORRY DARWIN FORGIVE ME!", );
   system("code SORRY\ DARWIN.txt")
   // :(
   return 0;
}
