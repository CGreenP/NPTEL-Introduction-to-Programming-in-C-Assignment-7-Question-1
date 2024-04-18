# NPTEL-Introduction-to-Programming-in-C-Assignment-7-Question-1
NPTEL Introduction to Programming in C Assignment 7 Question 1

# Question 1
Create a database of students using structures, where in each entry of the database will have the following fields:
1. a name, which is a string with at most 128 characters
2. their marks in physics which is an int between 0 and 100
3. their marks in chemistry which is an int number between 0 and 100
4. their marks in mathematics which is an int number between 0 and 100

You have to output a list of students in the following order.
1. if a student 'A' has lower marks in physics than a student 'B', then A's data is listed before B.
2. If A and B have the same physics marks and A has lower chemistry marks than B, then A is listed before B.
3.If A and B have the same marks in physics and chemistry, and A has lower marks in mathematics than B, then A is listed before B.
4. If all marks are equal and A's name precedes B's name in the dictionary order, then A is listed before B.

Input Format :
---
First line contains the number of students n, where 1<=n<=100.
In following n lines each line contains(space separated)  a name and their respective marks in physics, chemistry, maths, where 0<=marks<=100.

Output Format :
---
Sorted database of n lines.

# Sample Input 1
```sh
1
ankita 72 76 85
```

# Sample Output 1
```sh
ankita-72-76-85
```

# Sample Input 2
```sh
7
Abhimanyu 100 94 90
Akshay 90 91 83
Akshay 100 88 88
Aman 70 94 88
Amendra 80 95 85
Amit 70 82 89
Amit 80 82 70
```

# Sample Output 2
```sh
Amit-70-82-89\n
Aman-70-94-88\n
Amit-80-82-70\n
Amendra-80-95-85\n
Akshay-90-91-83\n
Akshay-100-88-88\n
Abhimanyu-100-94-90
```
