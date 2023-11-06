int main() {
    int score = 0;
    char answer;

    printf("Welcome to the quiz!\n");
    printf("It'll be a simple general knowledge quiz about the capitals of countries.\n");
    printf("ALL THE BEST!!!!\n\n");
    printf("Let's begin with the quiz\n\n");

    // Question 1
    printf("Question 1: What is the capital of India?\n");
    printf("A. Delhi\nB. Kenya\nC. Tokyo\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }

    // Question 2
    printf("\nQuestion 2: What is the capital of Japan?\n");
    printf("A. Tokyo\nB. Bern\nC. Juba\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }
    
     // Question 3
    printf("Question 3: What is the capital of Argentina?\n");
    printf("A. Doha\nB. Buenos Aires\nC. Singapore\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }

    // Question 4
    printf("\nQuestion 4: What is the capital of Austria?\n");
    printf("A. Kathmandu\nB. Lisbon\nC. Vienna\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }
    
     // Question 5
    printf("Question 5: What is the capital of Brazil?\n");
    printf("A. Mexico\nB. Brasilia\nC. Tokyo\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }

    // Question 6
    printf("\nQuestion 6: What is the capital of Columbia?\n");
    printf("A. Bogota\nB. Berlin\nC. Kingston\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }
    
     // Question 7
    printf("Question 7: What is the capital of Egypt?\n");
    printf("A. Rome\nB. New Delhi\nC. Cairo\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }

    // Question 8
    printf("\nQuestion 8: What is the capital of Finland?\n");
    printf("A. London\nB. Jakarta\nC. Helsinki\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }
    
     // Question 9
    printf("Question 9: What is the capital of Germany?\n");
    printf("A. Santiago\nB. Berlin\nC. San jose\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }

    // Question 10
    printf("\nQuestion 10: What is the capital of Malaysia?\n");
    printf("A. Ottawa\nB. Sofia\nC. Kuala Lumpur\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("CORRECT!\n");
        score++;
    } else {
        printf("WRONG!\n");
    }

    // Continue the code for additional questions the following the same structure

    // Final score
    printf("\nQuiz complete! Your final score is: %d out of 2\n", score);

    return 0;
}
