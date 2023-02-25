//my name is mohammad dehghani
//برنامه ای که جست و جو یک عدد در آرایه 10 در 10 به صورت ستونی انجام میدهد

#include <iostream>

using namespace std;

int main()
{
    int arr[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };

    int search_num;
    cout << "Enter a number to search: ";
    cin >> search_num;

    bool found = false;
    for (int col = 0; col < 10; col++) {
        for (int row = 0; row < 10; row++) {
            if (arr[row][col] == search_num) {
                found = true;
                cout << "Number found at column " << col + 1 << ", row " << row + 1 << endl;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        cout << "Number not found." << endl;
    }

    return 0;
}
