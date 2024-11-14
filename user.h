// header file

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
    string userName;
    string password;
    string email;
    string subscriptionStatus;
    vector<Music> personalizedRecc;
    vector<Playlist> playlists;
    vector<Order> orderStatus;
    vector<Music> listeningHistory;
    vector<Merchandise> wishList;

/// constructor for default values
    User(string uName, string userPass, string emailAD)
        : userName(uName), password(userPass), email(emailAD) {}

;
    /// class methoxds
    void getUserDetails();
    void updateProfile(string newUserData);
    void viewPurchaseHistory ();
    void createPlaylist (string playlistName);
};




