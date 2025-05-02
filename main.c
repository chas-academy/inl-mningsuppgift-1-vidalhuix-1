#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Your code goes here
    int rolls = 100;
    int dice_rolls[rolls];
    int counts[6] = {0};
    int sum = 0;

    
    for (int i = 0; i < rolls; i++)    {
        int dice_roll = (rand() % 6) + 1;
        dice_rolls[i] = dice_roll; // Save numbers into the array
        counts[dice_roll - 1]++;   // substract 1 to go from 1-6 to 0-5, this sums upp +1 to every number to the array counts
        sum = sum + dice_roll;     // Sum all numbers in the array
    }

    // Print how many times each number
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", counts[i]);
    }

    // Print sum numbers in the array
    printf("%d\n", sum);

    // Print the average as a float
    float average = (float)sum / rolls;
    printf("%.1f", average);

    return 0;
}
