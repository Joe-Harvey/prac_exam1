#ifndef LIBRARAY_H
#define LIBRARY_H
#include <array>
#include "Document.h"

class Library {

    private:
    array<Document, 0> docs;

    public:
    void addDocument(Document);  // add a Document to the Library
    void hasDocument(Document);  // check if a Document is in the Library
};

#endif