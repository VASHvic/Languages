#include <iostream>
using namespace std;

enum Day
{
  MON,
  TUE,
  WED,
  THU,
  FRI
};
int main()
{
  Day today;

  today = WED;

  cout << "Today " << today << endl;
  cout << "THU = " << THU << endl;
  today = static_cast<Day>(FRI);
  cout << "Today " << today << endl;

  for (Day d = MON; d <= FRI; d = static_cast<Day>(d + 1))
  {
    cout << d << " ";
  }

  // cin.get();
  return 0;
}