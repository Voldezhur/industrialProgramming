// Файл класса rational


class rational
{
    int a, b;
    bool canExist;

public:
    // Конструктор
    rational(int a1, int b1);

    // Запись параметров в объект
    void set(int a1, int b1);

    // Вывод дроби через черту
    void show();
};