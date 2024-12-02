#include "ArtistProfile.h"  // Include the header file

// Constructor definition
ArtistProfile::ArtistProfile(string aName, int aAge, string aBornIn,
                             string aGenre, string aPopularAlbum, string aPopularSong)
    : ArtistName(aName), Age(aAge), BornIn(aBornIn), Genre(aGenre),
      PopularAlbum(aPopularAlbum), PopularSong(aPopularSong) {}

// Display details about the artist
void ArtistProfile::display() const {
    cout << "Artist: " << ArtistName << endl;
    cout << "Age: " << Age << endl;
    cout << "Born In: " << BornIn << endl;
    cout << "Genre: " << Genre << endl;
    cout << "Popular Album: " << PopularAlbum << endl;
    cout << "Popular Song: " << PopularSong << endl;
}

string ArtistProfile::getArtistName() const {
    return ArtistName;
}

int ArtistProfile::getAge() const {
    return Age;
}

string ArtistProfile::getBornIn() const {
    return BornIn;
}

string ArtistProfile::getGenre() const {
    return Genre;
}

string ArtistProfile::getPopularAlbum() const {
    return PopularAlbum;
}

string ArtistProfile::getPopularSong() const {
    return PopularSong;
}

// Setter functions
void ArtistProfile::setArtistName(const string aName) {
    ArtistName = aName;
}

void ArtistProfile::setAge(const int aAge) {
    Age = aAge;
}

void ArtistProfile::setBornIn(const string aBornIn) {
    BornIn = aBornIn;
}

void ArtistProfile::setGenre(const string aGenre) {
    Genre = aGenre;
}

void ArtistProfile::setPopularAlbum(const string aPopularAlbum) {
    PopularAlbum = aPopularAlbum;
}

void ArtistProfile::setPopularSong(const string aPopularSong) {
    PopularSong = aPopularSong;
}

