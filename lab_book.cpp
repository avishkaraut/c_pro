#include <iostream>
using namespace std;

struct Book {

    int id;
    string title;
};

int main() {

    Book books[100];
    int count = 0;
    int choice;

    do {

        cout<<"\n1.Add Book\n2.Display Books\n3.Search Book\n4.Exit\n";
        cin>>choice;

        if(choice == 1) {

            cout<<"Enter Book ID: ";
            cin>>books[count].id;

            cout<<"Enter Title: ";
            cin>>books[count].title;

            count++;
        }

        else if(choice == 2) {

            for(int i=0;i<count;i++)
                cout<<books[i].id<<" "<<books[i].title<<endl;
        }

        else if(choice == 3) {

            string search;
            cout<<"Enter title to search: ";
            cin>>search;

            for(int i=0;i<count;i++) {

                if(books[i].title == search)
                    cout<<"Book Found: "<<books[i].title<<endl;
            }
        }

    } while(choice != 4);

    return 0;
}  
