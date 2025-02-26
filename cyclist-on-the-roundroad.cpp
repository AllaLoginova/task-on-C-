/* Длина Московской кольцевой автомобильной дороги — 109 километров. 
  Байкер Вася стартует с нулевого километра МКАД и едет со скоростью v километров в час. 
  На какой отметке он остановится через t часов?*/


#include <iostream>

int main() {
    int v, t;
    
    // Считываем скорость и время
    std::cin >> v >> t;

    // Вычисляем позицию на МКАД
    int position = (v * t % 109 + 109) % 109;

    // Выводим результат
    std::cout << position << std::endl;

    return 0;
}
