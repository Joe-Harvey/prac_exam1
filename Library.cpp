#include "Library.h"
#include "Document.h"
#include <vector>

Library :: Library(){

}

void Library :: addDocument(Document * newdoc){
    int s = docs.size();
    docs.resize(s + 1);
    docs.at(s + 1) = newdoc;
}

bool Library :: hasDocument(Document * doc){

    int id = doc->getDocumentID();
    int s = docs.size();

    bool ans = false;

    for (int i = 0; i < s; i++){
        if (id == docs.at(i)){
            ans = true;
        }
    }

    return ans;
}