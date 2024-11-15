#ifndef MERCHANDISE_H
#define MERCHANDISE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Merchandise {
public:
    int merchandiseId;
    string productName;
    string artist;
    double cost;
    string category;

    // Constructor for Merchandise class
    Merchandise(int merchid, const string& prodName, const string& artist, double cost, const string& cat)
        : merchandiseId(merchid), productName(prodName), artist(artist), cost(cost), category(cat) {}

    // Display function to show merchandise details
    void display() const {
        cout << "Merchandise ID: " << merchandiseId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Artist: " << artist << endl;
        cout << "Cost: $" << cost << endl;
        cout << "Category: " << category << endl;
    }
};

#endif // MERCHANDISE_H
