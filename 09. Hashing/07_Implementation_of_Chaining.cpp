#include <iostream>
#include <vector>
#include <list>
using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }

    ~MyHash() // Destructor to free dynamically allocated memory
    {
        delete[] table;
    }

    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void remove(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }

    bool search(int key)
    {
        int i = key % BUCKET;
        for (auto x : table[i])
            if (x == key)
                return true;
        return false;
    }
};

int main()
{
    MyHash hashTable(10); // Creating hash table with 10 buckets

    // Example usage
    hashTable.insert(5);
    hashTable.insert(15);
    hashTable.remove(5);

    cout << "Is 15 in the hash table? " << (hashTable.search(15) ? "Yes" : "No") << endl;

    return 0;
}
