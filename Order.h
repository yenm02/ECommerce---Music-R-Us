#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <vector>
#include <string>
#include "Merchandise.h"  // Including the Merchandise class

using namespace std;

class Order {
public:
    // Nested PaymentData class
    class PaymentData {
    public:
        string cardNumber;
        string cvv;
        string expDate;

        // Constructor for PaymentData
        PaymentData(const string& cardnum, const string& cvv, const string& exdate)
            : cardNumber(cardnum), cvv(cvv), expDate(exdate) {}
    };

    // Order Attributes
    int order_ID;
    int user_ID;
    vector<Merchandise> items;  // Vector of Merchandise objects
    double total_amount;
    string orderDate;
    string orderStatus;

    // Order Constructor with default status
    Order(int id, int usID, const vector<Merchandise>& itemList, const string& date, double cost, const string& status = "Pending")
        : order_ID(id), user_ID(usID), items(itemList), total_amount(cost), orderDate(date), orderStatus(status) {}

    // Static method to create an order with a list of merchandise
    static Order createOrder(int userId, const vector<Merchandise>& cartItems);

    // Method to process payment
    bool processPayment(const PaymentData& paymentDetails);

    // Method to display order details
    void displayOrderDetails() const;
};

#endif // ORDER_H
