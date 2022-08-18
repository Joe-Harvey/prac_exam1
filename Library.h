#ifndef LIBRARAY_H
#define LIBRARY_H
#include <vector>
#include "Document.h"

class Library {

    private:
    std :: vector<Document, 0> docs;

    public:
    Library();

    void addDocument(Document);  // add a Document to the Library
    bool hasDocument(Document);  // check if a Document is in the Library
};

#endif