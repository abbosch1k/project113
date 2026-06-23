#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> contacts;
    int choice;
    string name;

    do {

        cout << "\n=== CONTACT BOOK ===\n";
        cout << "1. Add Contact\n";
        cout << "2. Show Contacts\n";
        cout << "0. Exit\n";

        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1:
                cout << "Name: ";
                getline(cin, name);
                contacts.push_back(name);
                break;

            case 2:
                for(int i = 0; i < contacts.size(); i++)
                    cout << i + 1
                         << ". "
                         << contacts[i]
                         << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
