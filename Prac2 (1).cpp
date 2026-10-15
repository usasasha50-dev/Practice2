#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main()
{
    forward_list<string> editors = {"Photoshop", "GIMP", "Canva", "Figma", "Krita"};
    cout << "Завдання 1. Графічні редактори:" << endl;
    for (auto it = editors.begin(); it != editors.end(); ++it)
    {
        cout << *it << " ";
    }

    forward_list<string> list2 = {"Photoshop"};
    list2.push_front("Illustrator");
    list2.push_front("CorelDRAW");
    cout << "\n\nЗавдання 2. Після додавання:" << endl;
    for (string e : list2)
    {
        cout << e << " ";
    }
    list2.pop_front();
    cout << "\nПісля видалення першого елемента:" << endl;
    for (string e : list2)
    {
        cout << e << " ";
    }

    string searchElement = "Figma";
    bool found = false;
    auto it = editors.begin();
    while (it != editors.end())
    {
        if (*it == searchElement)
        {
            found = true;
            break;
        }
        ++it;
    }
    cout << "\n\nЗавдання 3. ";
    if (found)
        cout << "Елемент знайдено";
    else
        cout << "Елемент не знайдено";

    int sum = 0;
    for (auto i = editors.begin(); i != editors.end(); ++i)
    {
        sum = sum + i->length();
    }
    cout << "\n\nЗавдання 4. Загальна кількість символів: " << sum;

    string newElement = "Inkscape";
    it = editors.begin();
    bool inserted = false;
    while (it != editors.end())
    {
        if (*it == searchElement)
        {
            editors.insert_after(it, newElement);
            inserted = true;
            break;
        }
        ++it;
    }
    cout << "\n\nЗавдання 5. ";
    if (!inserted)
    {
        cout << "Елемент для пошуку відсутній у списку";
    }
    else
    {
        cout << "Оновлений список:" << endl;
        for (auto i = editors.begin(); i != editors.end(); ++i)
        {
            cout << *i << " ";
        }
    }

    return 0;
}