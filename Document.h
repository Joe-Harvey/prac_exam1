#ifndef Document_H
#define Document_H

class Document {

    private:
    int DocumentID;

    protected:
    virtual int getDocumentID() = 0;
};

#endif