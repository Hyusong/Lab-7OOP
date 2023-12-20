#include <iostream>
#include <set>
#include <algorithm>  // для set_union, set_difference, set_intersection
#include <iterator>   // для вставки

using namespace std;

int main() {
    // Створення набору 1
    set<int> set1 = { 1, 2, 3, 4, 5 };

    // Створення набору 2
    set<int> set2 = { 3, 4, 5, 6, 7 };

    // Союзна операція
    set<int> unionSet;
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(unionSet, unionSet.begin()));

    // Операція різниці
    set<int> differenceSet;
    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(differenceSet, differenceSet.begin()));

    // Операція перетину
    set<int> intersectionSet;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersectionSet, intersectionSet.begin()));

    // Виведіть результати
    cout << "Set 1: ";
    for (const auto& element : set1) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Set 2: ";
    for (const auto& element : set2) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Union: ";
    for (const auto& element : unionSet) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Difference: ";
    for (const auto& element : differenceSet) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (const auto& element : intersectionSet) {
        cout << element << " ";
    }
    cout << endl;

    // Перевірте, чи є елемент у наборі 1
    int elementToCheck = 3;
    if (set1.count(elementToCheck) > 0) {
        cout << elementToCheck << " is in Set 1" << endl;
    }
    else {
        cout << elementToCheck << " is not in Set 1" << endl;
    }

    return 0;
}
