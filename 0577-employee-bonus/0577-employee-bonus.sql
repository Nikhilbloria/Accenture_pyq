# Write your MySQL query statement below
select e.name,b.bonus
From Employee e
left join Bonus b
On e.empId=b.empId
where b.bonus < 1000
or b.bonus is null
