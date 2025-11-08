# Write your MySQL query statement below
SELECT 
    IFNULL(
(SELECT DISTINCT Salary 
FROM Employee 
ORDER BY SALARY DESC
LIMIT 1 OFFSET 1),
NULL)as SecondHighestSalary ;
