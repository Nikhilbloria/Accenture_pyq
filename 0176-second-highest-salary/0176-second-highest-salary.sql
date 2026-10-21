# Write your MySQL query statement below
Select max(salary) as SecondHighestSalary
From Employee
where salary <
    (select max(salary)
    from Employee)