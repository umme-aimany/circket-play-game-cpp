#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string playerName;
    int totalScore;
    int ballsPlayed;

public:
    Player() : totalScore(0), ballsPlayed(0) {}

    void setName(string name) {
        playerName = name;
    }

    string getName() const {
        return playerName;
    }

    void setScore(int score) {
        totalScore += score;
    }

    int getScore() const {
        return totalScore;
    }

    void incrementBalls() {
        ballsPlayed++;
    }

    int getBalls() const {
        return ballsPlayed;
    }
};

int main() {
    string playerNames[] = {
        "Babar Azam", "Naseem Shah", "Agha Salman", "Mohammad Amir",
        "Shaheen Afridi", "Shadab Khan", "Imad Wasim", "Fakhar Zaman",
        "Haris Rauf", "Mohammad Rizwan", "Iftikhar Ahmed"
    };

    int playerScores[][23] = {
        { -1 }, // Babar Azam
        { 3, 6, 1, 1, 1, -1 }, // Naseem Shah
        { 0, 4, 1, 1, 2, 1, 4, 6, 1, 0, 6, 2, 4, 1, 2, 0, 2, 3, 4, 1, 1, 6, -1 }, // Agha Salman
        { 6, 2, 2, 2, 2, 3, 4, 4, 2, -1 }, // Mohammad Amir
        { 0, 4, -1 }, // Shaheen Afridi
        { 4, 6, 1, 4, 3, 0, 3, 0, 6, 4, 0, 4, 4 , 1, 0, 1, 4, 4, 2, -1 }, // Shadab Khan
        { -1 }, // Imad Wasim
        { 0, 0, 6, 6, 3, 6, 2, 3, 6, 3, 0, 6, -1 }, // Fakhar Zaman
        { 4, 1, 0, 4, 2, 6, 4, 4, 6, 1, -1 }, // Haris Rauf
        { 4, 1, 6, -1 }, // Mohammad Rizwan
        { 3, 0, 4, 2, 4, 4, 4, 1, 4, -1 } // Iftikhar Ahmed
    };

    Player players[11];

    for (int i = 0; i < 11; ++i) {
        players[i].setName(playerNames[i]);
    }

    cout << "Cricket Match Simulation" << endl;
    cout << "========================" << endl << endl;

    // Simulate the match
    for (int i = 0; i < 11; ++i) {
        cout << (i + 1) << ". " << players[i].getName() << endl;
        cout << "Scores per Ball: ";
        for (int j = 0; playerScores[i][j] != -1; ++j) {
            int score = playerScores[i][j];
            players[i].incrementBalls();
            cout << score << " ";
            players[i].setScore(score);
        }
        cout << "OUT" << endl;
        players[i].incrementBalls(); 
        cout << "Total Score: " << players[i].getScore() << "\t Balls Played: " << players[i].getBalls() << endl << endl;
    }

    // Display Match Summary
    cout << "<<<<<< Match Summary >>>>>>" << endl;
    cout << "Player Name\tScore\tBalls Played" << endl;
    int maxScore = 0;
    string manOfTheMatch;

    for (int i = 0; i < 11; ++i) {
        cout << players[i].getName() << "\t" << players[i].getScore() << "\t" << players[i].getBalls() << endl;
        if (players[i].getScore() > maxScore) {
            maxScore = players[i].getScore();
            manOfTheMatch = players[i].getName();
        }
    }

    // Display Man of the Match
    cout << endl << "Man of the Match: " << manOfTheMatch << endl;

    return 0;
}
