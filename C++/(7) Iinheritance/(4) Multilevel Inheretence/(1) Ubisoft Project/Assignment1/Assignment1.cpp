#include <iostream>
using namespace std;

class Ubisoft {
private:
    int budget;
    int yearCreate;
    int numberOfEmployees;
    float rate;
    int gamesNumbers;
    static int counter;
public:

    //Default Constructor
    Ubisoft() {
        budget = 30000000;
        yearCreate = 1998;
        numberOfEmployees = 20000;
        rate = 4.8;
        gamesNumbers = 300;
    }

    //Parametrize Constructor
    Ubisoft(int b, int yc, int noe, float r, int gn) : budget(b), yearCreate(yc), numberOfEmployees(noe), rate(r), gamesNumbers(gn) {
        budget = b;
        yearCreate = yc;
        numberOfEmployees = noe;
        rate = r;
        gamesNumbers = gn;
        counter++;
    }

    //Destructor
    ~Ubisoft() {
        counter--;
    }

    //Setters
    void set_budget(int _budget) {
        budget = _budget;
    }

    void set_yearCreate(int _yearCreate) {
        budget = _yearCreate;
    }

    void set_numberOfEmployees(int _numberOfEmployees) {
        numberOfEmployees = _numberOfEmployees;
    }

    void set_rate(float _rate) {
        rate = _rate;
    }

    void set_gamesNumbers(int gamesNumbers) {
        gamesNumbers = gamesNumbers;
    }

    //Getters
    int getBudget() {
        return budget;
    }

    int getYearCreate() {
        return yearCreate;
    }

    int getNumberOfEmployees() {
        return numberOfEmployees;
    }

    float getRate() {
        return rate;
    }

    int getGamesNumbers() {
        return gamesNumbers;
    }

    //Display Function
    void display() {
        cout << "Ubisoft Data Is " << endl;
        cout << "budget Is " << budget << " year Create Is " << yearCreate << " number Of Employees Is " << numberOfEmployees << " rate Is " << rate << " Games Numbers Is " << gamesNumbers << endl;
    }

    //Counter
    int getCounter() {
        return counter;
    }
};

int Ubisoft::counter = 0;

class FarCry : public Ubisoft {
private:
    int releaseYear;
    int versions;
    int gameBudget;
    int gameEmployees;
    string team;
public:

    //Default Constructor
    FarCry() {
        releaseYear = 2002;
        versions = 6;
        gameBudget = 3000;
        gameEmployees = 300;
        team = "Farcry Team";
    }

    //Parametrize Constructor
    FarCry(int b, int yc, int noe, float r, int gn, int ry, int v, int gb, int ge, string t) : Ubisoft(b, yc, noe, r, gn) {
        releaseYear = ry;
        versions = v;
        gameBudget = gb;
        gameEmployees = ge;
        team = t;
    }

    //Setters
    void set_releaseYear(int _releaseYear) {
        releaseYear = _releaseYear;
    }

    void set_versions(int _versions) {
        versions = _versions;
    }

    void set_gameBudget(int _gameBudget) {
        gameBudget = _gameBudget;
    }

    void set_gameEmployees(int _gameEmployees) {
        gameEmployees = _gameEmployees;
    }

    void set_team(int _team) {
        team = _team;
    }

    //Getters
    int getReleaseYear() {
        return releaseYear;
    }

    int getVersions() {
        return versions;
    }

    int getGameBudget() {
        return gameBudget;
    }

    int getGameEmployees() {
        return gameEmployees;
    }

    string getTeam() {
        return team;
    }

    //Display Function
    void display() {
        Ubisoft::display();
        cout << "Farcry Data Is " << endl;
        cout << "Release Year Is " << releaseYear << " versions Is " << versions << " gameBudget Is " << gameBudget << " gameEmployees " << gameEmployees << " Team Is " << team << endl;
    }
};

class FarCry3 : public FarCry {
private:
    string heroName;
    bool openWorld;
public:

    //Default Constructor
    FarCry3() {
        heroName = "Jaon Barody";
        openWorld = true;
    }

    //Parameterize Constructor
    FarCry3(int b, int yc, int noe, float r, int gn, int ry, int v, int gb, int ge, string t, string hn, bool ow) : FarCry(b, yc, noe, r, gn, ry, v, gb, ge, t) {
        heroName = hn;
        openWorld = ow;
    }

    //Setters
    void set_heroName(string _heroName) {
        heroName = _heroName;
    }

    void set_openWorld(bool _openWorld) {
        openWorld = _openWorld;
    }

    //Getters
    string get_heroName() {
        return heroName;
    }

    bool get_openWorld() {
        return openWorld;
    }

    //Display Function
    void display() {
        Ubisoft::display();
        FarCry::display();
        cout << "Farcry3 Data Is " << endl;
        cout << "Hero Name Is " << heroName << " Is The Game Open World " << openWorld << endl;
    }
};

int main() {

    //Ubisfot Data From Default Constructor
    cout << "Display Ubisoft Data From Default Constructor" << endl;
    Ubisoft u1;
    u1.display();
    cout << u1.getCounter() << endl;

    cout << "====================================================" << endl;

    //Ubisfot Data From Parametrize Constructor
    cout << "Display Ubisoft Data From Parametrize Constructor" << endl;
    Ubisoft u2(100004, 1996, 4000, 3.7, 90);
    u2.display();
    cout << u2.getCounter() << endl;

    cout << "=====================================================" << endl;

    //Farcry Data From Default Constructor
    cout << "Display Farcry Data From Default Constructor" << endl;
    FarCry c1;
    c1.display();


    cout << "=====================================================" << endl;

    //Farcry Data From Parametrize Constructor
    cout << "Display Farcry Data From Parametrize Constructor" << endl;
    FarCry c2(200000, 2021, 500, 8.4, 100, 2004, 2, 200, 100, "tom clanycs");
    c2.display();

    cout << "=====================================================" << endl;

    //Farcry3 Data From Default Constructor
    cout << "Display Farcry3 Data From Default Constructor" << endl;
    FarCry3 fc1;
    fc1.display();

    cout << "=====================================================" << endl;

    //Farcry3 Data From Parameterize Constructor
    cout << "Display Farcry3 Data From Parameterize Constructor" << endl;
    FarCry3 fc2(200000, 2021, 500, 8.4, 100, 2004, 2, 200, 100, "tom clanycs", "Jason Not Barody", false);
    fc2.display();


    return 0;
}