#include <iostream>
using namespace std;

// Базовый класс
class BaseClass {
public:
    // Конструктор базового класса
    BaseClass(int value) : value(value) {}

    // Метод для отображения значения
    void display() const {
        cout << "Значение в базовом классе: " << value << endl;
    }

    // Виртуальный метод для описания класса
    virtual void describe() const {
        cout << "Это базовый класс." << endl;
    }

private:
    int value; // Поле для хранения значения
};

// Производный класс, наследующий от BaseClass
class DerivedClass : public BaseClass {
public:
    // Конструктор производного класса
    DerivedClass(int value, int extra_value) 
        : BaseClass(value), extra_value(extra_value) {}

    // Переопределенный метод для отображения значений
    void display() const {
        BaseClass::display(); // Вызов метода display() из базового класса
        cout << "Дополнительное значение в производном классе: " << extra_value << endl;
    }

    // Переопределенный метод для описания класса
    void describe() const override {
        cout << "Это производный класс." << endl;
    }

    // Дополнительный метод в производном классе
    void additional_method() const {
        cout << "Дополнительный метод в производном классе." << endl;
    }

private:
    int extra_value; // Поле для хранения дополнительного значения
};

// Тестовая программа для демонстрации работы методов
int main() {
    // Создание экземпляра базового класса
    BaseClass base_instance(10);
    cout << "Методы базового класса:" << endl;
    base_instance.display();
    base_instance.describe();

    // Создание экземпляра производного класса
    DerivedClass derived_instance(20, 30);
    cout << "\nМетоды производного класса:" << endl;
    derived_instance.display();
    derived_instance.describe();
    derived_instance.additional_method();

    return 0;
}
