// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <algorithm>
// using namespace std;

// int main(){
//     srand((unsigned)time(NULL));

//     vector<int> iv1(5);
//     cout << "vector 1 : ";
//     for(auto& i : iv1){
//         i = rand()%100;
//         cout << i << " "; 
//     }
//     sort(iv1.begin(), iv1.end());

//     cout << endl << "sorted vector 1 : ";
//     for(auto i : iv1){
//         cout << i << " "; 
//     }

//     vector<int> iv2(5);
//     cout << endl << "vector 2 : ";
//     for(auto& i : iv2){
//         i = rand()%100;
//         cout << i << " "; 
//     }
//     sort(iv2.begin(), iv2.end());

//     cout << endl << "sorted vector 2 : ";
//     for(auto i : iv2){
//         cout << i << " "; 
//     }

//     vector<int> iv3(iv1.size() + iv2.size());
//     merge(iv1.begin(), iv1.end(), iv2.begin(), iv2.end(), iv3.begin());
//     cout << "벡터1과 벡터2를 합병한 결과 : ";
//     for(auto i : iv3){
//         cout << i << " ";
//     }
// }