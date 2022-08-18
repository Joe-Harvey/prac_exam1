#ifndef LIBRARY_H
#define LIBRARY_H
#include "Document.h"

#include <vector>

class Library {

    private:
    std :: vector<Document *> docs;

    public:
    Library();

    void addDocument(Document *);  // add a Document to the Library
    bool hasDocument(Document *);  // check if a Document is in the Library
};

#endif