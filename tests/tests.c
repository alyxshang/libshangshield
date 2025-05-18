/*
LIBSHANGSHIELD by Alyx Shang.
Licensed under the FSL v1.
*/

#include "libshangshield.h"

/**
 * Testing the `digit_distance`
 * function.
 */
int test_digit_distance(){
  int one = 4;
  int two = 5;
  int exit_code = 1;
  int dist = digit_distance(4,5);
  if (dist == 1){
    exit_code = 0;
  }
  else{}
  return exit_code;
}

/**
 * Testing the `is_upper`
 * function.
 */
int test_is_upper(){
  char sub = 'A';
  int exit_code = 1;
  int stat = is_upper(sub);
  if (stat == 0){
    exit_code = 0;
  }
  else{}
  return exit_code;
}

/**
 * Testing the `is_lower`
 * function.
 */
int test_is_lower(){
  char sub = 'a';
  int exit_code = 1;
  int stat = is_lower(sub);
  if (stat == 0){
    exit_code = 0;
  }
  else{}
  return exit_code;
}

/**
 * Testing the `is_digit`
 * function.
 */
int test_is_digit(){
  char sub = '0';
  int exit_code = 1;
  int stat = is_digit(sub);
  if (stat == 0){
    exit_code = 0;
  }
  else{}
  return exit_code;
}

/**
 * Testing the `is_letter`
 * function.
 */
int test_is_letter(){
  char sub_one = 'b';
  char sub_two = 'B';
  int exit_code = 1;
  int stat_one = is_letter(sub_one);
  int stat_two = is_letter(sub_two);
  if (stat_one == 0 && stat_two == 0){
    exit_code = 0;
  }
  else{}
  return exit_code;
}

/**
 * Testing the `char_to_int`
 * function.
 */
int test_char_to_int(){
  char sub = '8';
  int exit_code = 1;
  int stat = char_to_int(sub);
  if (stat == 8){
    exit_code = 0;
  }
  else{}
  return exit_code;
}

/**
 * Testing the `str_length`
 * function.
 */
int test_str_length(){
  const char *sub = "hello";
  int exit_code = 1;
  int stat = str_length(sub);
  if (stat == 5){
    exit_code = 0;
  }
  else {}
  return exit_code;
}

/**
 * Testing the `char_type`
 * function.
 */
int test_char_type(){
  char num = '1';
  int exit_code = 1;
  char letter = 'a';
  char special = '@';
  enum CharType c_num = char_type(num);
  enum CharType c_letter = char_type(letter);
  enum CharType c_special = char_type(special);
  if (
      c_num == Number &&
      c_letter == Letter &&
      c_special == SpecialChar 
  ){
    exit_code = 0;
  }
  else {}
  return exit_code;
}

/**
 * Testing the `reduce_char_to_num`
 * function.
 */
int test_reduce_char_to_num(){
  int reduced = reduce_char_to_num(
      'a',
      5,
      6
  );
  int exit_code = 1;
  if (reduced == 5){
    exit_code = 0;
  }
  else {}
  return exit_code;
}

/**
 * Testing the `security_score`
 * function.
 */
int test_security_score(){
  int exit_code = 1;
  int res = security_score("hello", 5, 6);
  if (res == 2){
    exit_code = 0;
  }
  else {}
  return exit_code;
}

/**
 * Testing all
 * test functions.
 */
int main(){
  int code = 0;
  code += test_digit_distance();
  code += test_is_upper();
  code += test_is_lower();
  code += test_is_digit();
  code += test_is_letter();
  code += test_char_to_int();
  code += test_str_length();
  code += test_char_type();
  code += test_reduce_char_to_num();
  code += test_security_score();
  return code;
}
