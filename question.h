#include "Question.h"
#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    Question questions[4];
    int totalScore = 4;

    questions[0].SetQuestion("What is 2 + 2?", "4");
    questions[1].SetQuestion("What is 2 + 3?", "5");
    questions[2].SetQuestion("What is 2 + 4?", "6");
    questions[3].SetQuestion("What is 2 + 5?", "7");

    for (int i = 0; i < 4; i++)
    {
        if(questions[i].AskQuestion())
        {
            score++;
        }
        cout << endl << endl;
    }
    cout << "Final Score: " << score << " of " << totalScore << endl;

    return 0;
}
