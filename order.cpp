#include "Order.h"
#include <iostream>

using namespace std;

// paymentData Constructor
Order::paymentData::paymentData(const string& cardnum, const string& cvv, const string& exdate)
    : cardNumber(cardnum), cvv(cvv), expDate(exdate) {}

// Order Constructor
Order::Order(int id, int userID, const vector<Merchandise>& itemList, const string& date, double cost, const string& status)
    : order_ID(id), user_ID(userID), items(itemList), total_amount(cost), orderDate(date), orderStatus(status) {}

// Static method to create an order
Order Order::createOrder(int userId, const vector<Merchandise>& cartItems) {
    double totalCost = 0.0;