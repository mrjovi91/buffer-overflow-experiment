#include <stdio.h>
#include <string.h>

void exploit(char * input_string){
    char name[400];
    strcpy(name, input_string);
    printf("Test %s\n", name);
}

int main(int argc, char * argv[]){
    exploit(argv[1]);
    printf("Finished!");
    return 0;
}
