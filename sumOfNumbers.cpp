// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Date: Apr, 19, 2022
// This program asks the user for a positive integer. It
// then calculates the sum of the numbers from 0 up to
// that integer.
#include <iostream>

int main() {
  // initialize the loop counter and sum
  int counter = 0;
  int sum = 0;
  int userNum;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a positive number: ";
  std::cin >> userNumString;
  std::cout << std::endl;

  try {
    // convert from string to int
     userNum = std::stoi(userNumString);

    if (userNum >= 0) {
      // calculate the sum of all numbers from 0 to user number
          while (counter <= userNum) {
              sum = sum + counter;
              std::cout << "Tracking ";
              std::cout << counter << " times through the loop.\n";
              counter = counter + 1;
            }
            // display the sum to the user
            std::cout << "\nThe sum of the numbers from 0 to ";
            std::cout << userNum << " is: " << sum << std::endl;
        } else {
            std::cout << userNum << " is not a positive number.\n";
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << userNumString << " is not a number.\n";
  }
 }


