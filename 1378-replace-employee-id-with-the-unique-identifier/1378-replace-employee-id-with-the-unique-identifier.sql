# Write your MySQL query statement below
select eu.unique_id as unique_id, e.name as name
from Employees e
left join EmployeeUNi eu
On e.id = eu.id