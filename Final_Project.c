#include <stdio.h>

int main()
{
    int score, grade;

     printf("Enter your score = ");
    scanf("%d", &score);

    if(score >= 85) grade = 'A';
else if(score >= 80) grade = 'B';
else if(score >= 70) grade = 'C';
else if(score >= 60) grade = 'D';
else grade = 'F';
   
    // Print grade
    printf("Your grade is %c\n", grade);

        switch(grade) {
    case 'A':
        printf("Excellent work!\n");
        break;
    case 'B':
        printf("Well done\n");
        break;
    case 'C':
        printf("Good job\n");
        break;
    case 'D':
        printf("You passed, but you could do better\n");
        break;
    case 'F':
        printf("Sorry, you failed\n");
        break;
}

if (grade != 'F') {
    printf("You are eligible for the next level.\n");
} else {
    printf("Please try again next time.\n");
}

    return 0;
}