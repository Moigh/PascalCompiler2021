#pragma once
#include <cstring>
#include <cstdio>
#include <iostream>
#include <set>

class lexer{
  private:
    std::set <char> letters;
    std::set <char> numbers;
    std::set <char> spec_char;

  public:
    lexer(std::string file_name);
    ~lexer();

};



/*изучить что там на паскале
  разделить на программы классы типы
  отследить ровный вывод
  тесты()


*/