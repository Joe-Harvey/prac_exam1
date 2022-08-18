#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document {

    private:
    int DocumentID;

    protected:
    virtual int getDocumentID() = 0;
};

#endif