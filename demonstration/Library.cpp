/* DEFINITION FILE for the Library Class declared in Library.h
 */
// Include Library.h to provide the class declaration for Library
#include "Library.h"
/* Include <algorithm> to provide the STL std::find and std::sort
 * algorithms.
 */
#include <algorithm>
// Include <iostream> to enable output to the terminal.
#include <iostream>

// DEFINITION of DEFAULT CONSTRUCTOR. No initialization is required
Library::Library(){}

// DEFINITION of destructor. No deallocation is required
Library::~Library(){}

/* DEFINITION: This method uses the size() method of std::vector
 * to verify that the requested shelf position is occupied.
 *
 * If so, it extracts the name using the at() method of std::vector
 * and returns a copy of the extracted std::string.
 *
 * If not, the method returns a string with an apologetic message.
 */
std::string Library::getBookAt(unsigned long int shelfPosition){
  /* The size method of std::vector returns the number of elements
  * that the vector contains. The "shelfPosition" argument specifies
  * a position counted from zero, so the subsequent  "<" comparison 
  * ensures that the requested position on the book shelf is occupied.
  */
  if(shelfPosition < bookShelf.size()){
    /* The at() method of std::vector returns a REFERENCE to the 
     * vector element at the position specified by its argument 
     * (counted from zero). The following statement returns a COPY
     * of the referenced data.
     */ 
    return bookShelf.at(shelfPosition);
  }
  // If the requested position is not occupied, return an apology!
  return "Sorry, that book is on loan!";
}

/* DEFINITION: This method uses the std::find() algorithm that
 * searches for a specific element within an ITERATOR RANGE.
 * It searches the entire bookshelf for a book with a name matching
 * that specified by the method argument.
 *
 * If std::find() locates the requested element, it returns an 
 * ITERATOR corresponding to that element.
 *
 * If std::find() DOES NOT locate the requested element it returns
 * an iterator that is equal to that returned by the end() method
 * of std::vector. 
 *
 * If the book is found, the method returns true.
 * Otherwise the method returns false and prints an apologetic 
 * message to the terminal.
 */
bool Library::haveBookNamed(const std::string & bookName){
  /* Use the std::find() algorithm to search for an element matching
   * the contents of "bookName" between the beginning and end of
   * the bookshelf. The method returns an ITERATOR type, which is
   * assigned to a temporary variable "bookPosition".
   */
  std::vector<std::string>::iterator bookPosition =
    std::find(bookShelf.begin(), bookShelf.end(), bookName);

  /* If std::find() does not locate the specified element it returns
   * an iterator equivalent to one-past-the-end of the "bookShelf" 
   * std::vector member datum.
   * Accordingly, the subsequent statement assigns true to "haveBook"
   * if the requested element is found and false otherwise.
   */
  bool haveBook = bookPosition != bookShelf.end();

  // If the book was not found...
  if(!haveBook){
    // ... print an apology to the terminal.
    std::cout << "Sorry, that book is on loan!" << std::endl;
  }

  // Return true if the book was found and false otherwise.
  return haveBook;
}

/* DEFINITION: This method uses the push_back() method of std::vector
 * to append a new std::string element to the "bookShelf" std::vector
 * member datum.
 *
 * It subsequently invokes the std::sort algrithm, which sorts all 
 * the elements of the "bookShelf" std::vector into alphabetic order.
 * ALPHABETIC SORTING (actually lexicographical sorting) is the DEFAULT
 * BEHAVIOUR of std::sort for std::string container elements.
 */
void Library::addBook(const std::string & bookName){
  /* The push_back() method appends a copy of "bookName" to
   * the end of the "bookShelf" std::vector.
   */
  bookShelf.push_back(bookName);
  /* The std::sort algorithm performs a lexicographical ordering of
   * the elements of the "bookShelf" std::vector.
   */
  std::sort(bookShelf.begin(), bookShelf.end());
}

