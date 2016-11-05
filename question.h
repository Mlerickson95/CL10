#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <iostream>
using namespace std;

class Question
{
private:
    string m_question;
    string m_answer;

public:
    void SetQuestion(const string& question, const string& answer);
    bool AskQuestion();
};

#endif // QUESTION_H
