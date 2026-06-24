#include <stdio.h>
void displayscore(int total_correct, int total_questions);
int main() {
    char* questions[5] = {
        "Which planet is known as the Red Planet?",
        "What is the largest ocean on Earth?",
        "Who wrote the play 'Romeo and Juliet'?",
        "Which country is home to the kangaroo?",
        "What is the chemical symbol for water?"};
    char* options[5][4] = {
        {"A. Earth", "B. Mars", "C. Jupiter", "D. Saturn"},
        {"A. Atlantic", "B. Indian", "C. Pacific", "D. Arctic"},
        {"A. Charles Dickens", "B. William Shakespeare", "C. Mark Twain", "D. Jane Austen"},
        {"A. South Africa", "B. Australia", "C. Canada", "D. India"},
        {"A. CO2", "B. H2O", "C. NaCl", "D. O2"}};
    char answers[5] = {'B', 'C', 'B', 'B', 'B'};
    char user_answer;
    int correct_count = 0;
    printf("--- GENERAL KNOWLEDGE QUIZ ---\n");
    printf("Type your answer using UPPERCASE letters (A, B, C, or D).\n\n");
    for(int i = 0; i < 5; i++) {
        printf("Question %d: %s\n", i + 1, questions[i]);
        for(int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);}
        printf("Your Answer: ");
        scanf(" %c", &user_answer);
        if(user_answer == answers[i]) {
            printf("RESULT: CORRECT!\n\n");
            correct_count++;} 
            else {
            printf("RESULT: WRONG. (Correct answer was %c)\n\n", answers[i]);}}
    displayscore(correct_count, 5);
    return 0;}
void displayscore(int total_correct, int total_questions) {
    printf("-------------------------------\n");
    printf("QUIZ OVER! Your Final Score: %d/%d\n", total_correct, total_questions);
    if(total_correct == total_questions) {
        printf("Perfect Score! You're a genius.\n");
    } else if(total_correct >= 3) {
        printf("Good job! Great general knowledge.\n");
    } else {
        printf("Better luck next time!\n");
    }
    printf("-------------------------------\n");
}