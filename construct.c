#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// STRUCT
struct trip { int cost; char place[32];};

// LOCATIONS
char locations[5][32] = {"Muerica", "CS Dojo", "Fiji", "CS Kitchen", "11th Floor Pool"};

// PRINTS OUT VARIABLES OF THE STRUCT
void printTrip(struct trip myTrip) {
  printf("Trip Info: \n");
  printf("Location: %s\n", myTrip.place);
  printf("Cost: $%d\n", myTrip.cost);
  printf("------------------------\n");
}

// CREATING A TRIP
struct trip makeTrip() {
  struct trip newTrip;
  strcpy(newTrip.place,locations[rand() % 5]);
  newTrip.cost = rand() % 9999 + 2;
  return newTrip;
}

// MODIFIES VALUES OF THE CURRENT STRUCT
void editTrip(struct trip *ntrip, char* newLocation, int newCost) {
  strncpy(ntrip->place, newLocation, 32);
  ntrip->cost = newCost;
}

// MAIN FUNCTION TESTING
int main() {
  printf("------------------------\n");
  // CREATING FIRST
  struct trip First = makeTrip();
  printTrip(First);
  // MODIFYING FIRST
  editTrip(&First, "12th Floor", 10498);
  printTrip(First); // PRINT CHANGE
  // CREATING ANOTHER ONE TO SEE IF IT IS DIFFERENT
  struct trip Second = makeTrip();
  printTrip(Second);
  return 0;
}
