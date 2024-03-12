#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int playGame(vector<int> &sequence, int player, int round)
{
    if (sequence.empty() || round == 0)
    {
        return 0;
    }

    int number = sequence[0];
    sequence.erase(sequence.begin());

    int score = 0;

    if (number % 2 == 0)
    {
        reverse(sequence.begin(), sequence.end());
    }

    if (player == 1)
    {
        score = number + playGame(sequence, 2, round - 1);
    }
    else
    {
        score = -number + playGame(sequence, 1, round - 1);
    }

    return score;
}

int main()
{
    int n = 5;
    vector<int> sequence = {3, 6, 2, 3, 5};

    int player1Score = playGame(sequence, 1, n);
    int player2Score = playGame(sequence, 2, n);
    int scoreDifference = player1Score - player2Score;

    cout << scoreDifference << endl;

    return 0;
}
