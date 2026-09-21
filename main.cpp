#include <iostream>
#include <string>

// Project 1 — Noe Zuniga
// CIS 5 Week 04 · Student card

int main() {
const int CURRENT_YEAR = 2026;

  /// TODO (week 3): declare and initialize the four boxes
// first (std::string), age (int), credits (int), gpa (double)

std::string first = "";
int age = 0;
int credits = 0;
double gpa = 0.0;

  // TODO (week 2): a cout question, then a cin into the box — four times
std::cout << "First name? ";
std::cin >> first;

std::cout << "Age? ";
std::cin >> age;

std::cout << "Credits this term? ";
std::cin >> credits;

std::cout << "GPA? ";
std::cin >> gpa;
  // TODO (week 4): one com
  //puted line with an operator
  int grad_year = CURRENT_YEAR + 4;

  // TODO (weeks 1-4): print the card from the variable names
  //   header line, one labeled line per variable, then the computed value
std::cout << "=== Student card ===\n";
std::cout << "Name: " << first << "\n";
std::cout << "Age: " << age << "\n";
std::cout << "Credits: " << credits << "\n";
std::cout << "GPA: " << gpa << "\n";
std::cout << "Expected graduation: " << grad_year << "\n";
  return 0;
}
