#include "Library.h"
#include "Document.h"
#include "Book.h"

#include <iostream>

int main(){
    Library lib;

    Book * p_my_book = new Book(0);

    //subtype Polymorphism: The following functions take type Document * as an input but instead
    //a pointer to a child class Book is passed.

    lib.addDocument(p_my_book); 
    lib.hasDocument(p_my_book);

    return 0;
}