#include <cstring>
#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <set>

#include "lexer.h"

lexer::lexer(std::string file_name){

  for(int i = 0; i < 26; ++i)
    letters.insert(char(65+i));
  for(int i = 0; i < 26; ++i)
    letters.insert(char(97+i));

  for(int i = 0; i < 10; ++i)
    numbers.insert(char(48+i));

  spec_char = {char(39), '+', '-', '*', '/', '=', '<', '>', '[', ']', '.', ',', '(', ')', ':', '^', '@', '{', '}', '$', '#', '&', '%'};

}


/*изучить что там на паскале
  разделить на программы классы типы
  отследить ровный вывод
  тесты()


*/