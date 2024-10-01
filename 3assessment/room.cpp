//2. Hotel Reservation System
//Description : A system where users can book, cancel, and modify room reservations.
//Classes :
//    Room : Contains room information such as room number, type(single / double), price, and availability.
//    Reservation : Stores reservation details like check - in, check - out dates, and customer info.
//    Customer : Stores customer information, including name, contact details, and reservation history.
//    Features : Manage room bookings, handle cancellations, search room availability.

//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Room {
//	int roomnumber;
//	string type;
//	double price;
//	bool isavailable;
//	
//public:
//	Room() :roomnumber(0), type(""), price(0), isavailable(true) {}
//
//	//Room(int number,const string& type)
//
//	void showroom() const {
//		cout << "Room Number : " << roomnumber << endl;
//		cout << "Room Type : " << type << endl;
//		cout << "Room Price : " << price<<endl;
//		cout << "Availability : " << (isavailable ? "Available" : "Not Available");
//
//	}
//
//	bool Bookroom() {
//		if (isavailable) {
//			isavailable = false;
//			return true;
//		}
//		else
//			return false;
//	}
//
//	void cancelRoom() {
//		isavailable = true;
//	}
//
//	bool isRoomavailable() const{
//		return isavailable;
//
//	}
//
//	double getprice() const {
//		return price;
//	}
//
//	int getroomnumber() const {
//		return roomnumber;
//	}
//
//};
//
//class Reservation{
//public:
//	void getcustomer() {
//		cout>>"Name"
//
//	}
//}