//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//    ifstream openFile("data.txt");
//    if (!openFile) {
//        cout << "No file present" << endl;
//        return 1;
//    }
//
//    string line, content;
//    string find, replace;
//
//    cin >> find;
//    cin >> replace;
//    while (getline(openFile, line)) {
//        size_t pos = 0;
//        while ((pos = line.find(find, pos)) != string::npos) {
//            line.replace(pos, find.length(), replace);
//            pos += replace.length(); 
//        }
//        content += line + '\n'; 
//    }
//
//    openFile.close();
//    ofstream outFile("data.txt");
//    cout << content;
//    outFile << content;
//    outFile.close();
//
//    return 0;
//}
