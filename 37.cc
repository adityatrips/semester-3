#include <iostream>
#include <string>

using namespace std;

class Media {
   protected:
    string title;
    string publication;

   public:
    virtual void read() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter publication: ";
        cin >> publication;
    }

    virtual void show() {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Book : public Media {
   private:
    int numPages;

   public:
    void read() {
        Media::read();
        cout << "Enter number of pages: ";
        cin >> numPages;
    }

    void show() {
        Media::show();
        cout << "Number of pages: " << numPages << endl;
    }
};

class Tape : public Media {
   private:
    int playingTime;

   public:
    void read() {
        Media::read();
        cout << "Enter playing time: ";
        cin >> playingTime;
    }

    void show() {
        Media::show();
        cout << "Playing time: " << playingTime << endl;
    }
};

int main() {
    Media* mediaPtr;
    Book book;
    Tape tape;

    mediaPtr = &book;
    mediaPtr->read();
    mediaPtr->show();

    mediaPtr = &tape;
    mediaPtr->read();
    mediaPtr->show();

    return 0;
}
