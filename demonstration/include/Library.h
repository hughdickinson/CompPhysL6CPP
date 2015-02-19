/* Use include guards to ensure that subsequent source
 * code is parsed AT MOST ONCE by the compiler.
 * 
 * Use the LIBRARY_H preprocessor MACRO to control ontry to 
 * the preprocessor conditional block containing the class
 * definition.
 */
#ifndef LIBRARY_H
#define LIBRARY_H

// Include the <string> header to provide the std::string class
#include <string>
// Include the <vector> header to provide the std::vector class
#include <vector>

/* A simple class modelling a Library full of books!
 * NOTE: This file contains no METHOD DEFINITIONS. These are 
 *       provided in a separate Library.cpp file.
 */
class Library {

  /* A std::vector<std::string> member datum that models an 
   * extensible bookshelf of named books.
   */
  std::vector<std::string> bookShelf;
  
 public :

  // DECLARATION of DEFAULT CONSTRUCTOR
  Library();

  // DECLARATION of destructor
  ~Library();

  /* DECLARATION of a method that returns the name of the book
   * at a specified position on the bookshelf modeled by 
   * "bookShelf".
   *
   * The method expects a single parameter:
   * 1) shelfPosition - specifies the position on the shelf (origin 
   *    is zero)
   */
  std::string getBookAt(unsigned long int shelfPosition);

  /* DECLARATION of a method that returns the a boolean value
   * that specifies whether a named book exists on the book shelf.
   *
   * The method expects a single parameter:
   * 1) bookName - specifies the name of the book to search the shelf
   *    for.
   *
   * The method returns true if the book is found and false otherwise.
   */
  bool haveBookNamed(const std::string & bookName);

  /* DECLARATION of a method that enables new books to be added to the 
   * bookshelf.
   * The method also sorts the bookshelf contents alphabetically every 
   * time a new book is added.
   *
   * The method expects a single parameter:
   * 1) bookName - specifies the name of the book to add to the shelf.
   *
   * The method returns true if the book is found and false otherwise.
   */
  void addBook(const std::string & bookName);
};

// end of the preprocessor conditional block controlled by LIBRARY_H 
#endif

