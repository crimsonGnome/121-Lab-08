// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <iostream>
#include <string>

#include "doe.h"
#include "joey.h"
#include "kangaroo.h"

using std::cin, std::cout, std::string;
// Include any headers you might need.

int main() {
  string doe;
  string joey;

  // 1. Ask the user for the doe's name, and the joey's name.
  cout << "What is the doe's name?";
  cin >> doe;
  cout << "\nWhat is the joey's name?";
  cin >> joey;
  // 2. Create a Doe with these names.
  Doe kangarooDoe(doe, joey);
  // 3. Get a reference to the Doe's Joey.
  Joey& kangarooJoey = kangarooDoe.GetJoey();

  std::string answer;
  do {
    // 4. Bounce the Doe once and then the Joey once.
    kangarooDoe.Bounce();
    kangarooJoey.Bounce();

    // 5. Print a message about the number of bounces for the Doe and then the
    cout << kangarooDoe.GetName() << " has bounced "
         << kangarooDoe.GetBounceCount() << " times.\n";
    cout << kangarooJoey.GetName() << " has bounced "
         << kangarooJoey.GetBounceCount() << " times.\n";

    // 6. Check if the user wants to bounce again.
    std::cout << "Do you want to bounce again? \"n\" to exit ";
    std::cin >> answer;

  } while (answer != "n");

  return 0;
}
