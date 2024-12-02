#ifndef ARTISTPROFILE_H
#define ARTISTPROFILE_H

#include <iostream>
#include <string>

using namespace std;

class ArtistProfile {
private:
    string ArtistName;
    int Age;
    string BornIn;
    string Genre;
    string PopularAlbum;
    string PopularSong;

public:
    // Constructor to initialize all data members
    ArtistProfile(string aName, int aAge, string aBornIn, string aGenre, string aPopularAlbum, string aPopularSong);

    // Function to display artist details
    void display() const;

    // Getter functions for each member variable
    string getArtistName() const;
    int getAge() const;
    string getBornIn() const;
    string getGenre() const;
    string getPopularAlbum() const;
    string getPopularSong() const;

    // Setter functions for each member variable
    void setArtistName(const string aName);
    void setAge(const int aAge);
    void setBornIn(const string aBornIn);
    void setGenre(const string aGenre);
    void setPopularAlbum(const string aPopularAlbum);
    void setPopularSong(const string aPopularSong);
};

#endif // ARTISTPROFILE_H

