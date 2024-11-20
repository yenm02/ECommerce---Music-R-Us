#ifndef MERCHANDISE_H
#define MERCHANDISE_H

#include <iostream>
#include <string>

using namespace std;

class Merchandise {
private:
    int merchandiseId;      // Unique identifier for merchandise
    string productName;     // Name of the product
    string artistMerch;          // Associated artist
    double cost;            // Price of the product
    string category;        // Product category (e.g., "Vinyl", "Clothing")
    int inventory;          // Stock quantity available

public:
    // Constructor
    Merchandise(int merchid, const string& prodName, const string& artist, double cost, const string& cat, int inv);

    // Display merchandise details
    void display() const;

    // Getters
    int getMerchandiseId() const;
    string getProductName() const;
    string getArtistMerch() const;
    double getCost() const;
    string getCategory() const;
    int getInventory() const;

    // Setters
    void setProductName(const string& name);
    void setArtist(const string& art);
    void setCost(double price);
    void setCategory(const string& cat);
    void setInventory(int inv);

    // Check availability
    bool checkAvailability() const;

    // Update inventory
    void incrementInventory(int amount);
    bool decrementInventory(int amount);
};

#endif // MERCHANDISE_H
