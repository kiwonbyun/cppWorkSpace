// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> intVec(5);

//     for(int i=0; i <intVec.size(); i++){
//         intVec[i] = i+1;
//     }
//     // cout << intVec.size() << endl;
//     // cout << intVec.capacity() << endl;
//     // for(int i=0; i <intVec.size(); i++){
//     //     cout << intVec[i] << endl;
//     // }

//     intVec.push_back(11);
//     cout << "논리적 크기:" <<intVec.size() << endl;
//     cout << "물리적 크기:" <<intVec.capacity() << endl;
//     cout << "저장된 값:";
//     for(int i=0; i <intVec.size(); i++){
//         cout << intVec[i] << ",";
//     }
//     cout << endl;

//     for(int i=1; i<=5; i++){
//         intVec.push_back(i+11);
//     }
//     cout << "논리적 크기:" <<intVec.size() << endl;
//     cout << "물리적 크기:" <<intVec.capacity() << endl;
//     cout << "저장된 값:";
//     for(int i=0; i <intVec.size(); i++){
//         cout << intVec[i] << ",";
//     }
//     cout << endl;

//     for(int i=1; i<=3; i++){
//         intVec.pop_back();
//     }
//     cout << "논리적 크기:" <<intVec.size() << endl;
//     cout << "물리적 크기:" <<intVec.capacity() << endl;
//     cout << "저장된 값:";
//     for(int i=0; i <intVec.size(); i++){
//         cout << intVec[i] << ",";
//     }
//     cout << endl;
// }
