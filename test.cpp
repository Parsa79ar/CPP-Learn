#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo() {
        cout << "Name: " << Name <<endl;
        cout << "OwnerName: " << OwnerName <<endl;
        cout << "SubscribersCount: " << SubscribersCount <<endl;
        cout << "Videos: " <<endl;

        for (string videoTiltle : PublishedVideoTitles) {
            cout << videoTiltle <<endl;
        }
    }
};

int main()
{ 
    string name;
    string ownerName;
    string temp;
    int publishedVideoTitlesCount;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter OwnerName: ";
    cin >> ownerName;
    cout << "Enter PublishedVideoTitles Count: ";
    cin >> publishedVideoTitlesCount;

    YouTubeChannel ytChannel(name, ownerName);

    cout << "Enter PublishedVideoTitles: \n";
    for (int i=0; i <= publishedVideoTitlesCount; i++) {
        cout << i << ": ";
        cin >> temp;
        ytChannel.PublishedVideoTitles.push_back(temp);
    }

    cout << "Enter Subscribers Count: ";
    cin >> ytChannel.SubscribersCount;
    
    ytChannel.GetInfo();

    return 0;
}
