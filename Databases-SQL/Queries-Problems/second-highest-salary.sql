/*
https://leetcode.com/problems/second-highest-salary/

Write a SQL query to get the second highest salary from the Employee table.

Table: Employee
+----+--------+
| Id | Salary |
+----+--------+
| 1  | 100    |
| 2  | 200    |
| 3  | 300    |
+----+--------+

For example, given the above Employee table, 
the query should return 200 as the second highest salary. 
If there is no second highest salary, then the query should return null.
*/

SELECT MAX(E.SALARY) AS SecondHighestSalary
FROM EMPLOYEE AS E
WHERE E.SALARY NOT IN
(
    SELECT MAX(EM.SALARY)
    FROM EMPLOYEE AS EM
);