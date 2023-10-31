#include "pch.h"
#include "CppUnitTest.h"
#include "../labit63/labit63.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
        TEST_METHOD(TestSwapElementsWithOddEvenIndices)
        {
            
            int testArray[6] = { 1, 2, 3, 4, 5, 6 }; // Оголошуємо масив для тестування

            int expectedArray[6] = { 2, 1, 4, 3, 6, 5 }; // Очікуваний результат

            swapElementsWithOddEvenIndices(testArray, 6); // Викликаємо функцію для обміну елементів

            int n = 6;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0 && i + 1 < n) {
                    Assert::AreEqual(expectedArray[i], testArray[i]); // Перевіряємо, чи парні індекси правильно обмінено
                }
                else if (i % 2 != 0 && i - 1 >= 0) {
                    Assert::AreEqual(expectedArray[i], testArray[i]); // Перевіряємо, чи непарні індекси правильно обмінено
                }
                else {
                    Assert::AreEqual(expectedArray[i], testArray[i]); // Перевіряємо, що інші елементи залишилися незмінними
                }
            }
        }
    };
}