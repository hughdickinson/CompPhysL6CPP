// Include the <iostream> header to enable terminal output.
#include <iostream>

// Include the HeadOfTheClass.h header, which provides
// HeadOfTheClass class.
// NOTE: The difference between #include <header> and
//       #include "header" is simply the order in which the
//       C preprocessor searches locations to find the file.


int main(int argc, char * argv[]){

  // Create an instance of HeadOfTheClass
  HeadOfTheClass headOfTheClass;

  // Add some percentage scores
  headOfTheClass.addPercentageScore(30.3);
  headOfTheClass.addPercentageScore(90.9);
  headOfTheClass.addPercentageScore(70.7);
  headOfTheClass.addPercentageScore(50.5);

  // Get the head of the class.
  double bestInClass = headOfTheClass.getTheHead();

  // Output the head of the class to the terminal.
  std::cout << "The best score was " << bestInClass << " %" << std::endl;
  
  // return 0 to indicate success
  return 0;
}
