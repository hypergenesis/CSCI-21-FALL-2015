/*
 * Name        : lab_3.cpp
 * Author      : River Roseveare-Hunt
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "lab_3.h"
/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 * -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */
string Goldilocks(string item, int number) {
  // CODE HERE
  string output;
  
  if (item == "porridge" && number == 1)
  {
      output = "This " + item + " is too hot";
  }
  else if (item == "porridge" && number == 2)
  {
     output = "This " + item + " is too cold";
  }
  else if (item == "porridge" && number == 3)
  {
     output = "This " + item + " is just right";
  }
  
  else if (item == "chair" && number == 1)
  {
     output = "This " + item + " is too big";
  }
  else if (item == "char" && number == 2)
  {
     output = "This " + item + " is too small";
  }
  else if (item == "chair" && number == 3)
  {
     output = "This " + item + " is just right";
  }
  
  else if (item == "bed" && number == 1)
  {
     output = "This " + item + " is too hard";
  }
  else if (item == "bed" && number == 2)
  {
     output = "This " + item + " is too soft";
  }
  else if (item == "bed" && number == 3)
  {
     output = "This " + item + " is just right";
  }
  return output;
}

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or
 * uppercase values for player_one and player_two arguments are acceptable.
 * Possible inputs: 'R' rock, 'S' scissor, 'P' paper
 * Conditions
 * -rocks beats scissors
 * -scissors beats paper
 * -paper beats rock
 * @param char player_one - Represents player one's "play" ('R', 'S', or 'P')
 * @param char player_two - Represents player two's "play" ('R', 'S', or 'P')
 * @return int - 1 if player one wins, 2 if player two wins, 3 on a draw,
 *               0 if invalud inputs
 */
int RockScissorPaper(char player_one, char player_two) {
  // YOU MUST USE A SWITCH IN THIS FUNCTION
  // CODE HERE
  switch (player_one)
  {
    case 'R':
      switch (player_two)
      {
        case 'R':
          return 3;
        case 'P':
          return 2;
        case 'S':
          return 1;
      }
    case 'P':
      switch (player_two)
      {
        case 'R':
          return 1;
        case 'P':
          return 3;
        case 'S':
          return 2;
      }
    case 'S':
      switch (player_two)
      {
        case 'R':
          return 2;
        case 'P':
          return 1;
        case 'S':
          return 3;
      }
  }
  return 0;
}

/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) {
  // CODE HERE
  string output;
  for (unsigned int i = 0; i < input.size(); i++)
  {
    output[i] = tolower(input[i]);
  }
  return output;
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) {
  // CODE HERE
    string output;
  for (unsigned int i = 0; i < input.size(); i++)
  {
    output[i] = toupper(input[i]);
  }
  return output;
}

int main ()
{
  return 0;
}