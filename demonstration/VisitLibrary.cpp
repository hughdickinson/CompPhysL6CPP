/* Example program that excercises the functionality of
 * the Library class.
 */
// Include Library.h to provide the class declaration for Library
#include "Library.h"
// Include <iostream> to enable output to the terminal.
#include <iostream>

int main(int argc, char * argv[]){

  // Create an instance of the Library class.
  Library library;
  // Add some books to the bookshelf
  library.addBook("Template MetaProgramming in C++");
  library.addBook("War and Peace");
  library.addBook("Män som hatar kvinnor");
  library.addBook("The Hunt For Red October");

  // Exercise the getBookAt() method
  std::cout << library.getBookAt(0) << "\n"
	    << library.getBookAt(4) // Position 4 should not exist
	    << std::endl; 

  /* Exercise the haveBookNamed() method.
   * The std::boolalpha token changes the default behaviour of std::cout
   * so that boolean values are printed as "true" and "false" instead of
   * 1 and 0.
   */
  std::cout << std::boolalpha
	    << library.haveBookNamed("War and Peace") << "\n"
	    << library.haveBookNamed("The Illiad") // "The Illiad" should not exist.
	    << std::endl;
  
  return 0;
}
