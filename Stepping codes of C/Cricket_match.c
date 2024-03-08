// Problem 10  Cricket match target runs
#include <stdio.h>
#include <math.h>

/* Function to calculate the par score for Team B */
double parScore(int oversA, int wicketsA, int oversB, int wicketsB) {
  // Calculate the resources for Team A and Team B
  double resourcesA = oversA + wicketsA;
  double resourcesB = oversB + wicketsB;

  // Calculate the par score for Team B
  double parScoreB = 250 * resourcesB / resourcesA;

  // Adjust the par score for the rate at which runs are scored
  parScoreB = parScoreB * pow(1 - 0.004 * oversB, -0.5);

  return parScoreB;
}

int main() {
  // Get the input values
  int oversA, wicketsA, oversB, wicketsB;

  printf("Enter overs for Team A: ");
  scanf("%d", &oversA);

  printf("Enter wickets for Team A: ");
  scanf("%d", &wicketsA);

  printf("Enter overs for Team B: ");
  scanf("%d", &oversB);

  printf("Enter wickets for Team B: ");
  scanf("%d", &wicketsB);

  // Calculate the par score for Team B
  double parScoreB = parScore(oversA, wicketsA, oversB, wicketsB);

  // Print the par score for Team B
  printf("Par score for Team B: %.2f\n", parScoreB);

  return 0;
}
