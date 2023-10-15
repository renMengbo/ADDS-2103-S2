#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    documents[id] = {name, license_limit, std::list<int>()};
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    for (const auto& doc : documents) {
        if (doc.second.name == name) {
            return doc.first; // Return docid if found
        }
    }
    return 0; // Document not found
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (documents.find(docid) != documents.end() && patrons.find(patronID) != patrons.end()) {
        auto& doc = documents[docid];
        if (doc.borrowed.size() < doc.license_limit) {
            doc.borrowed.push_back(patronID);
            return true; // Document is borrowed
        }
    }
    return false; // Document cannot be borrowed
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (documents.find(docid) != documents.end()) {
        auto& doc = documents[docid];
        doc.borrowed.remove(patronID);
    }
}
