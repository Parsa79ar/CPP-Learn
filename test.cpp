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
    YouTubeChannel ytChannel("Parsa", "Parsa");
    ytChannel.PublishedVideoTitles.push_back("cpp");
    ytChannel.PublishedVideoTitles.push_back("php");
    ytChannel.PublishedVideoTitles.push_back("python");
    ytChannel.SubscribersCount = 10;
    
    ytChannel.GetInfo();

    return 0;
}
