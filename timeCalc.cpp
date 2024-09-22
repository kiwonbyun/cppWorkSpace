// #include <iostream>
// using namespace std;

// struct TimeRec{
//     int hours;
//     int minutes;
// };
// void AddTime(TimeRec &t1, const TimeRec &t2);
// void AddTime(TimeRec &t1, int minutes);

// int main(){
//     TimeRec tRec1={1,40};
//     TimeRec tRec2={2,35};

//     AddTime(tRec1, tRec2);
//     cout << tRec1.hours << ':' << tRec1.minutes << endl;

//     AddTime(tRec1, 45);
//     cout << tRec1.hours << ':' << tRec1.minutes << endl;
// }

// void AddTime(TimeRec &t1, const TimeRec &t2){
//     t1.minutes += t2.minutes;
//     t1.hours += t2.hours + t1.minutes / 60;
//     t1.minutes %= 60;
// }

// void AddTime(TimeRec &t1, int minutes){
//     t1.minutes += minutes;
//     t1.hours = t1.minutes/60;
//     t1.minutes %= 60;
// }