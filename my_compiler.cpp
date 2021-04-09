#include <cstring>
#include <cstdio>
#include <stdlib.h>
#include <set>

#include "lexer.h"
#include "compiler_names.h"

int main(int argc, char * argv[]){

  int arg = 1;

  if ((argc > arg) && (strcmp(argv[arg],"-l") == 0)){
    ++arg;
    if (argc <= arg){
      printf("%s: error: missing argument to ‘%s’\n", comp_name, argv[arg - 1]);
    }
    else{
      //_lexer lexer(argv[keys]);
      printf("good\n");
    }
  }

  if (argc <= arg)
    printf("%s: fatal error: no input files\n", comp_name);

}



/*изучить что там на паскале
  разделить на программы классы типы
  отследить ровный вывод
  тесты()


*/