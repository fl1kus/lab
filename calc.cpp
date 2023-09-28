#include <iostream>

using namespace std;

int main() {

    int a, b, op;   double result;

    cout << "Введіть перше число\n";   cin >> a;

    cout << "Введіть оператор\n1\t+\n2\t-\n3\t*\n4\t/\n\n";  cin >> op;

    cout << "Введіть друге число\n";     cin >> b;

    switch (op) {

    case 1:    result = a + b;
       

        break;

    case 2:    result = a - b;

        break;

    case 3:    result = a * b;
    

        break;

    case 4:     result = a / b;

        break;

    }

    cout << "Результат = " << result;

}

3.       Далі потрібно створити гілку для операції додавання :

git checkout - b addition

git status

4.       Наступним кроком розробляється модуль для операції додавання.Після розробки код “case 1” виглядатиме так :

switch (op) {

case 1:    result = a + b;  break;

    ...

}