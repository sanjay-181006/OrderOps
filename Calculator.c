#include <stdio.h>

int main() {
    int n, i;
    float num[100];
    char op[100];
    float result;

    printf("Enter number of operands (max 100): ");
    scanf("%d", &n);
    if (n < 2 || n > 100) {
        printf("Invalid number of operands!\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter operand %d: ", i + 1);
        scanf("%f", &num[i]);
    }

    for (i = 0; i < n - 1; i++) {
        printf("Enter operator %d (+, -, *, /): ", i + 1);
        scanf(" %c", &op[i]);
        if (op[i] != '+' && op[i] != '-' && op[i] != '*' && op[i] != '/') {
            printf("Invalid operator!\n");
            return 0;
        }
    }

    for (i = 0; i < n - 1; i++) {
        if (op[i] == '*' || op[i] == '/') {
            switch(op[i]) {
                case '*':
                    num[i] = num[i] * num[i + 1];
                    break;
                case '/':
                    if (num[i + 1] == 0) {
                        printf("Error: Division by zero!\n");
                        return 0;
                    }
                    num[i] = num[i] / num[i + 1];
                    break;
            }
            //the most imp. step..
            for (int j = i + 1; j < n - 1; j++) { //j takes the index of the value just after the calculated one
                num[j] = num[j + 1]; //moves all the elements to the left by omitting the value used for calculation
                op[j] = op[j + 1]; //omits the used operator
            }
            n--; //reduces the length of array
            i--; //reduces the pointer index
        }
    }

    result = num[0];
    for (i = 0; i < n - 1; i++) {
        switch(op[i]) {
            case '+':
                result += num[i + 1];
                break;
            case '-':
                result -= num[i + 1];
                break;
        }
    }

    printf("Result = %.2f\n", result);
    return 0;
}
