/*
https://leetcode.com/problems/classes-more-than-5-students/

There is a table courses with columns: student and class

Please list out all classes which have more than or equal to 5 students.

For example, the table: courses
+---------+------------+
| student | class      |
+---------+------------+
| A       | Math       |
| B       | English    |
| C       | Math       |
| D       | Biology    |
| E       | Math       |
| F       | Computer   |
| G       | Math       |
| H       | Math       |
| I       | Math       |
+---------+------------+

Should output:
+---------+
| class   |
+---------+
| Math    |
+---------+
*/

SELECT C.CLASS
FROM COURSES AS C
GROUP BY C.CLASS
HAVING COUNT(DISTINCT C.STUDENT) >= 5;
