/*A book shop maintains the inventory of books that are being sold at the shop.
The list includes details such as author, title, price, publisher and stock position.
Whenever a customer wants a book, the sales person puts the title and author and
the system searches the list and displays whether it is available not.
If it is not, an appropriate message is displayed. 
If it is, then the system displays the book details and requests for the number of copies required. 
If the requested copies are available , the total cost of the requested copies is displayed;
otherwise the message " Required copies not in stock" is displayed..
Design a system using a class called "books" with suitable member functions and constructors.
Use the "new" operator in constructor to allocate memory space required.*/


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Books {
//    string author;
//    string title;
//    int price;
//    string publisher;
//    int stock_position;
//public:
//    void getdata();
//    void putdata() const;
//    string getAuthor() const { return author; }
//    string getTitle() const { return title; }
//    int getStock() const {return stock_position;}
//    int getprice() const { return price; }
//};
//void Books::getdata() {
//    cout << "Author: ";
//    cin.ignore();
//    getline(cin, author);
//
//    cout << "Title: ";
//    getline(cin, title);
//
//    cout << "Price: ";
//    cin >> price;
//
//    cout << "Publisher: ";
//    cin.ignore();
//    getline(cin, publisher);
//
//    cout << "Stock Position: ";
//    cin >> stock_position;
//    cout << "\n";
//}
//void Books::putdata() const {
//    cout << "Author: "<< author<<"\n";
//    cout << "Title: "<< title << "\n";
//    cout << "Price: "<< price << "\n";
//    cout << "Publisher: "<<publisher << "\n";
//    cout << "Stock Position: "<<stock_position << "\n";
//    cout << "\n";
//    
//}
//void addbook(Books books[],int &count) {
//   
//    if (count < 100) {
//        books[count].getdata();
//        count++;
//    }
//    else {
//        cout << "Book list is full.\n";
//    }
//}
//void displaybook(const Books books[], int count) {
//    for (int i = 0; i < count; i++) {
//        cout << "\nBook " << (i + 1) << ":\n";
//        books[i].putdata();
//    }
//}
//void searchbook(const Books books[], int count) {
//    string sauthor, stitle;
//    cout << "Enter the author name: ";
//    cin.ignore();
//    getline(cin, sauthor);
//
//    cout << "Enter the title: ";
//    getline(cin, stitle);
//    int a = 0;
//    int flag = 0;
//    for (int i = 0; i < count; i++) {
//        if (books[i].getAuthor() == sauthor && books[i].getTitle() == stitle) {
//            /*books[i].putdata();*/
//            flag = 1;
//            cout << "Book Available\n";
//            books[i].putdata();
//            cout << "Number of copies required: ";
//            cin >> a;
//            if (books[i].getStock() >= a) {
//                int b = books[i].getprice();
//                int c = b * a;
//                cout <<"Total cost= "<< c << endl;
//                cout << "\n";
//               
//            }
//            else {
//                cout << " Required copies not in stock\n\n";
//            }
//
//
//        }
//        
//        
//    }
//    if(flag==0){
//        cout << "No book available in the given name by the given author\n";
//        }
//}
//int main() {
//    const int size = 100;
//    int count = 0;
//    Books books[size];
//    int x;
//    do {
//        cout << "Select the option:\n";
//        cout << "1) Add new Book\n";
//        cout << "2) Display All Books\n";
//        cout << "3) Search for Book\n";
//        cout << "4)Exit\n";
//        cin >> x;
//        switch (x) {
//        case 1:
//            addbook(books, count);
//            break;
//        case 2:
//            displaybook(books, count);
//            break;
//         case 3:
//            searchbook(books, count);
//            break;
//        case 4:
//            break;
//        default:
//            cout << "Error tryagain";
//        }
//    } while (x != 4);
//
//    return 0;
//}