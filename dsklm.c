#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
   FILE* fs;
   fs = fopen("file.txt", "w");
   fprintf(fs, "get pwned bozo");
   fclose(fs);
   system("mkdir ~/Desktop/JAJA");
   system("mv file.txt ~/Desktop/JAJA");
   system("vscode ~/Desktop/JAJA/file.txt");
   system("vscodium ~/Desktop/JAJA/file.txt");
   
   return 0;
}
