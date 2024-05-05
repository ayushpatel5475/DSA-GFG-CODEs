#include <iostream>
#include <vector>
#include <list>
using namespace std;

class MyHash {
private:
    int m; // Size of the hash table
    vector<int> table;

    int h1(int key) {
        return key % m;
    }

    int h2(int key) {
        // Choose a prime smaller than m for better results
        return 1 + (key % (m - 1));
    }

public:
    MyHash(int size) : m(size) {
        table.resize(m, -1); // Initialize all elements to -1 (indicating empty)
    }

    bool isFull() {
        for (int i = 0; i < m; ++i) {
            if (table[i] == -1)
                return false; // If any slot is empty, the table is not full
        }
        return true;
    }

    void doubleHashingInsert(int key) {
        if (isFull()) {
            cout << "Error: Hash table is full." << endl;
            return;
        }

        int probe = h1(key);
        int offset = h2(key);

        while (table[probe] != -1) { // While slot is occupied
            probe = (probe + offset) % m; // Apply double hashing
        }
        table[probe] = key; // Insert the key into the table
    }

    void printHashTable() {
        cout << "Hash Table:" << endl;
        for (int i = 0; i < m; ++i) {
            if (table[i] != -1) {
                cout << "Slot " << i << ": " << table[i] << endl;
            } else {
                cout << "Slot " << i << ": Empty" << endl;
            }
        }
    }
};

int main() {
    MyHash hashTable(10); // Creating hash table with 10 slots

    // Example usage
    hashTable.doubleHashingInsert(5);
    hashTable.doubleHashingInsert(15);

    hashTable.printHashTable();

    return 0;
}
