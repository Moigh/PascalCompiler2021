#include <cstring>
#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <fstream>

#include "lexer.h"
#include "compiler_names.h"


void error_message(char * m){
  std::cout << comp_name << ": error: " << m << std::endl;
}

int main(int argc, char * argv[]){

  int arg = 1;
  char err_message[100];

  if ((argc > arg) && (strcmp(argv[arg],"-l") == 0)){
    ++arg;

    if (argc <= arg){
      sprintf(err_message, "missing argument to ‘%s’", argv[arg - 1]);
      error_message(err_message);
    }
    else{

      std::ifstream input(argv[arg]);

      if (input.is_open()) {
        //lexer _lexer(argv[keys]);
        //_lexer::start();

        printf("good\n");
        input.close();
      }else{
        sprintf(err_message, "cannot open ‘%s’ for reading: No such file or directory", argv[arg]);
        error_message(err_message);
      }
    }
  }



  if (argc <= arg){

    sprintf(err_message, "no input files");
    error_message(err_message);

  }
  else if (argc <= 2){

    std::ifstream input(argv[arg]);

    if (input.is_open()) {
      printf("good\n");
      input.close();
    }
    else{
      sprintf(err_message, "cannot open ‘%s’ for reading: No such file or directory", argv[arg]);
      error_message(err_message);
    }

  }

}


/*изучить что там на паскале
  разделить на программы классы типы
  отследить ровный вывод
  тесты()


*/