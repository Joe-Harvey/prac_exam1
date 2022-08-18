#include "Library.h"
#include "Document.h"
#include "Book.h"

int main{
    Library lib;

    Book * p_my_book = new Book(0);

    lib.addDocument(p_my_book);
    lib.hasDocument(p_my_book);
}