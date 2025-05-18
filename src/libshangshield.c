/*
LIBSHANGSHIELD by Alyx Shang.
Licensed under the FSL v1.
*/

#include "libshangshield.h"

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int digit_distance(int one, int two){
  int result = 0;
  if (one > two) {
    result = one - two;
  } 
  else if (one < two) {
    result = two - one;
  } 
  else {
    result = 0;
  }
  return result;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int is_upper(char subject) {
    const char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int result = 1;
    for (int i = 0; i < 26; i++) {
      char curr = alphabet[i];
      if (curr == subject){
        result = 0;
      }
      else {}
    }
    return result;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int is_lower(char subject) {
    const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    int result = 1;
    for (int i = 0; i < 26; i++) {
      char curr = alphabet[i];
      if (curr == subject){
        result = 0;
      }
      else {}
    }
    return result;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int is_digit(char subject) {
    const char *digits = "0123456789";
    int result = 1;
    for (int i = 0; i < 10; i++) {
      char curr = digits[i];
      if (curr == subject){
        result = 0;
      }
      else {}
    }
    return result;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int is_letter(char subject){
  int is_ok_u = is_upper(subject);
  int is_ok_l = is_lower(subject);
  int result = 1;
  if (is_ok_u == 0 || is_ok_l == 0){
    result = 0;
  }
  else {}
  return result;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
enum CharType char_type(char subject){
  enum CharType result = SpecialChar;
  if (is_digit(subject) == 0){
    result = Number;
  }
  else if (is_letter(subject) == 0){
    result = Letter;
  }
  else {}
  return result;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int char_to_int(char digit){
  int result = -1;
  if (is_digit(digit) == 0){
    result = digit - '0';
  }
  else {}
  return result;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int reduce_char_to_num(
  char subject,
  int letter_weight,
  int special_weight
){
  int result = 0;
  enum CharType c_type = char_type(subject);
  if (c_type == Number){
    int as_digit = char_to_int(subject);
    result = as_digit;
  }
  else if (c_type == Letter){
    result = letter_weight;
  }
  else {
    result = special_weight;
  }
  return result;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int str_length(const char *subject){
  int i = 0;
  while(*subject != '\0'){
    i++;
    subject++;
  }
  return i;
}

/**
 * This function's documentation
 * can be found in the interface
 * file.
 */
int security_score(
  const char *subject,
  int special_weight,
  int letter_weight
){
  int score = 0;
  int length = str_length(subject);
  int range_end = length + 1;
  for (int i = 0; i < range_end; i++){
    const char curr = subject[i];
    char next = curr;
    if (i == range_end) {
      next = subject[i - 1];
    }
    else {
      next = subject[i + 1];
    }
    const int curr_score = reduce_char_to_num(
      curr, 
      letter_weight, 
      special_weight
    );
    const int next_score = reduce_char_to_num(
      next, 
      letter_weight, 
      special_weight
    );
    const int distance = digit_distance(
      curr_score, 
      next_score
    );
    score += distance;
  }
  return score;
}
