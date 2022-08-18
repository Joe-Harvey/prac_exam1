#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document {

    protected:
    int DocumentID;

    public:
    virtual int getDocumentID() = 0;
};

#endif