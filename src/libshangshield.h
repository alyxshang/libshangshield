/*
LIBSHANGSHIELD by Alyx Shang.
Licensed under the FSL v1.
*/

#ifndef LIBSHANGSHIELD_H
#define LIBSHANGSHIELD_H

/**
 * @brief This enum represents
 * the possible characters in 
 * a password.
 */
enum CharType{
  Number,
  Letter,
  SpecialChar
};

/**
 * @brief Computes the distance between two integers.
 * @param one A non-negative integer.
 * @param two A non-negative integer.
 * @return The distance between two integers.
 */
int digit_distance(
  int one,
  int two
);

/**
 * @brief Checks whether the supplied character is 
 * an uppercase letter or not.
 * @param subject A character.
 * @return Returns 0 if the character is uppercase.
 * 1 is returned if the character is not uppercase.
 */
int is_upper(char subject);

/**
 * @brief Checks whether the supplied character is 
 * a lowercase letter.
 * @param subject A character.
 * @return Returns 0 if the character is lowercase.
 * 1 is returned if the character is not lowercase.
 */
int is_lower(char subject);

/**
 * @brief Checks whether the supplied character is 
 * a digit or not.
 * @param subject A character.
 * @return Returns 0 if the character is a digit.
 * 1 is returned if the character is not a digit.
 */
int is_digit(char subject);

/**
 * @brief Checks whether the supplied character is 
 * a letter or not.
 * @param subject A character.
 * @return Returns 0 if the character is a letter.
 * 1 is returned if the character is not a letter.
 */
int is_letter(char subject);

/**
 * @brief Checks which kind of character was 
 * supplied.
 * @param subject A character.
 * @return Returns a variant of the `CharType` enum. 
 */
enum CharType char_type(
  char subject
);

/**
 * @brief Converts a character to an integer.
 * @param subject A character.
 * @return Returns the integer corresponding to
 * the digit character supplied. 
 */
int char_to_int(char digit);

/**
 * @brief Reduces a character in a password to an integer.
 * @param subject A character.
 * @param letter_weight The weight letters get.
 * @param special_weight The weight special characters get.
 * @return Returns the integer mapped from a character in
 * a password.
 */
int reduce_char_to_num(
  char subject,
  int letter_weight,
  int special_weight
);

/**
 * @brief Returns the length of a string.
 * @param subject A pointer to a character array.
 * @return Returns the length of the supplied string
 * as an integer.
 */
int str_length(
  const char *subject
);

/**
 * @brief Returns the security score of a password.
 * @param subject A pointer to a character array.
 * @param special_weight The weight special characters get.
 * @param letter_weight The weight letters get.
 * @return Returns the security score as an integer.
 */
int security_score(
  const char *subject,
  int special_weight,
  int letter_weight
);

#endif
