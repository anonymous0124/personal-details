#include <stdio.h>

int main() {
    char name[50];
    int age;
    char address[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Clear the input buffer
    while (getchar() != '\n');

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);

    printf("\n\n--- Personal Details ---\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Address: %s", address);

    return 0;
}
/*In this program, we declare three variables: name as a character array to store the name, 
age as an integer to store the age, and address as a character array to store the address.

The fgets function is used to read the name and address because it allows us to read spaces and newlines as well. 
We use sizeof(name) and sizeof(address) to ensure that we don't exceed the maximum buffer size.

The scanf function is used to read the age. After reading the age, we clear the input buffer using a 
while loop to ensure there are no extra characters left in the input buffer before reading the address.

Finally, the program displays the entered details using printf statements.

Please note that this program assumes that the input provided by the user will not exceed the maximum buffer size. 
You can modify the buffer sizes (name[50] and address[100]) according to your needs.*/