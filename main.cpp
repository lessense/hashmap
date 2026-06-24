#include <iostream>
#include <unordered_map>
#include <string>
#include <cassert>

using namespace std;

// Простые тесты для std::unordered_map
void TestUnorderedMap() {
    unordered_map<string, int> map;

    // 1. Тест вставки (insert)
    map["apple"] = 5;
    map["banana"] = 7;
    map.insert({"orange", 3});

    // 2. Тест поиска (find)
    auto it = map.find("apple");
    assert(it != map.end() && it->second == 5);
    cout << "Test find: PASSED" << endl;

    // 3. Тест удаления (erase)
    map.erase("banana");
    assert(map.find("banana") == map.end());
    cout << "Test erase: PASSED" << endl;

    // 4. Тест размера (size)
    assert(map.size() == 2); // apple и orange
    cout << "Test size: PASSED" << endl;

    // 5. Тест доступа к отсутствующему ключу (operator[])
    int value = map["grape"]; // создаст новый элемент с 0
    assert(value == 0);
    assert(map.size() == 3);
    cout << "Test operator[]: PASSED" << endl;

    cout << "\nAll unordered_map tests PASSED!" << endl;
}

int main() {
    cout << "Running tests for std::unordered_map...\n" << endl;
    TestUnorderedMap();
    return 0;
}
