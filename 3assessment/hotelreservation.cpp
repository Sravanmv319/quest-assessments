#include <iostream>
#include <string>
using namespace std;

const int MAX_RESERVATIONS = 10; 
const int MAX_ROOMS = 4; 

class Room {
public:
    Room() : roomNumber(0), type(""), price(0.0), isAvailable(true) {} 
    Room(int number, const string& roomType, double roomPrice)
        : roomNumber(number), type(roomType), price(roomPrice), isAvailable(true) {}

    void showDetails() const {
        cout << "Room Number: " << roomNumber
            << ", Type: " << type
            << ", Price: " << price
            << ", Availability: " << (isAvailable ? "Available" : "Not Available") << endl;
    }

    bool bookRoom() {
        if (isAvailable) {
            isAvailable = false;
            return true;
        }
        return false;
    }

    void cancelRoom() {
        isAvailable = true;
    }

    bool isRoomAvailable() const {
        return isAvailable;
    }

    double getPrice() const {
        return price;
    }

    int getRoomNumber() const {
        return roomNumber;
    }

private:
    int roomNumber;
    string type; 
    double price;
    bool isAvailable;
};

class Reservation {
public:
    Reservation() : roomNumber(0), customerName(""), checkInDate(""), checkOutDate("") {}

    void setReservation(int roomNum, const string& name, const string& checkIn, const string& checkOut) {
        roomNumber = roomNum;
        customerName = name;
        checkInDate = checkIn;
        checkOutDate = checkOut;
    }

    void showReservationDetails() const {
        if (roomNumber != 0) { 
            cout << "Room Number: " << roomNumber
                << ", Customer: " << customerName
                << ", Check-In: " << checkInDate
                << ", Check-Out: " << checkOutDate << endl;
        }
    }

    int getRoomNumber() const {
        return roomNumber;
    }

private:
    int roomNumber;
    string customerName;
    string checkInDate;
    string checkOutDate;
};

class Customer {
public:
    Customer() : reservationCount(0) {}

    void setDetails(const string& customerName, const string& customerContact) {
        name = customerName;
        contact = customerContact;
    }

    void addReservation(const Reservation& reservation) {
        if (reservationCount < MAX_RESERVATIONS) {
            reservations[reservationCount++] = reservation;
        }
        else {
            cout << "Maximum reservation limit reached.\n";
        }
    }

    void showReservations() const {
        cout << "Reservations for " << name << ":\n";
        for (int i = 0; i < reservationCount; i++) {
            reservations[i].showReservationDetails();
        }
    }

    string getName() const {
        return name;
    }

private:
    string name;
    string contact;
    Reservation reservations[MAX_RESERVATIONS];
    int reservationCount;
};

class Features {
public:
    Features() : roomCount(0) {}

    void addRoom(int number, const string& type, double price) {
        if (roomCount < MAX_ROOMS) {
            rooms[roomCount++] = Room(number, type, price);
        }
        else {
            cout << "Maximum room limit reached.\n";
        }
    }

    void displayRooms() const {
        cout << "Available Rooms:\n";
        for (int i = 0; i < roomCount; i++) {
            rooms[i].showDetails();
        }
    }

    void bookRoom(Customer& customer) {
        int roomNumber;
        string name, checkIn, checkOut;

        cout << "Enter your name: ";
        cin >> ws; 
        getline(cin, name);

        cout << "Enter room number to book: ";
        cin >> roomNumber;

        for (int i = 0; i < roomCount; i++) {
            if (rooms[i].getRoomNumber() == roomNumber && rooms[i].isRoomAvailable()) {
                cout << "Enter check-in date: ";
                cin >> ws; 
                getline(cin, checkIn);

                cout << "Enter check-out date: ";
                getline(cin, checkOut);

                rooms[i].bookRoom();
                Reservation newReservation;
                newReservation.setReservation(roomNumber, name, checkIn, checkOut);
                customer.addReservation(newReservation);
                cout << "Room booked successfully.\n";
                return;
            }
        }
        cout << "Room not available or does not exist.\n";
    }

    void cancelRoom() {
        int roomNumber;
        cout << "Enter room number to cancel: ";
        cin >> roomNumber;

        for (int i = 0; i < roomCount; i++) {
            if (rooms[i].getRoomNumber() == roomNumber) {
                rooms[i].cancelRoom();
                cout << "Room cancelled successfully.\n";
                return;
            }
        }
        cout << "Room not found.\n";
    }

private:
    Room rooms[MAX_ROOMS]; 
    int roomCount;
};

int main() {
    Features features;
    Customer customer;

    for (int i = 0; i < MAX_ROOMS; i++) {
        int number;
        string type;
        double price;

        cout << "Enter Room Number: ";
        cin >> number;
        cout << "Enter Room Type (Single/Double): ";
        cin >> type;
        cout << "Enter Room Price: ";
        cin >> price;

        features.addRoom(number, type, price);
    }

    // Main menu
    int choice;
    do {
        cout << "\n1. Display Rooms\n2. Book Room\n3. Cancel Room\n4. Show Reservations\n5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            features.displayRooms();
            break;
        case 2:
            features.bookRoom(customer);
            break;
        case 3:
            features.cancelRoom();
            break;
        case 4:
            customer.showReservations();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

