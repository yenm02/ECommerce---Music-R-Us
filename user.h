#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Playlist;
class Order;
class Music;
class Merchandise;

// User class
class User {
public:
    // Attributes
    int user_id;                           // identifier for the user
    string userName;
    string password;
    string email;
    string subscriptionStatus;
    vector<Music> personalizedRecc;        // List of recommended music
    vector<Playlist> playlists;            // User's playlists
    vector<Order> orderStatus;             // List of user's orders
    vector<Music> listeningHistory;        // User's listening history
    vector<Merchandise> wishList;          // Wishlist of merchandise

    // Constructor with default subscription status set to free
    User(int id, string uName, string userPass, string emailAD, string subStatus = "Free")
        : user_id(id), userName(uName), password(userPass), email(emailAD), subscriptionStatus(subStatus) {}

    // Methods
    void getUserDetails();                  // Displays user details
    void updateProfile(string newUserData); // Updates user's profile with new email
    void viewPurchaseHistory();             // Views purchase history
    void createPlaylist(string playlistName); // Creates a new playlist
};

#endif // USER_H
