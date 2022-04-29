Binary Search'te sıralanmış bir dizinin bulunmak istenilen sayının soldan ve sağdan alanı daraltarak (her aramada size/2) bulmasını sağlayan algoritmadır.

Binary Search

Begin with an interval covering the whole array.
If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
Otherwise, narrow it to the upper half.
Repeatedly check until the value is found or the interval is empty.