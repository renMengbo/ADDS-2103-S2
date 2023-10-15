#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <list>

class DocumentManager {
public:
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);

private:
    struct Document {
        std::string name;
        int license_limit;
        std::list<int> borrowed;
    };

    std::unordered_map<int, Document> documents;
    std::unordered_set<int> patrons;
};

#endif
