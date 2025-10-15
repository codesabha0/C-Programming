
1️⃣ Print the multiplication table of a given number

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}


2️⃣ Display the sum of even numbers between 1 and 20

#include <stdio.h>
int main() {
    int i, sum = 0;
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    printf("%d", sum);
    return 0;
}


3️⃣ Predict the output

#include <stdio.h>
int main() {
    int a = 10, b = 5;
    int c = a-- - --b + ++a + b++;
    printf("%d %d %d", a, b, c);
    return 0;
}


output: 10 5 21


4️⃣ Input two floats and print their sum rounded to 3 decimal places

#include <stdio.h>
int main() {
    float a, b, sum;
    printf("Enter two float numbers: ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    printf("%.3f", sum);
    return 0;
}


5️⃣ Use switch to display the name of a day when the user enters a number (1–7)

#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1–7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;
        default: printf("Invalid input");
    }
    return 0;
}
