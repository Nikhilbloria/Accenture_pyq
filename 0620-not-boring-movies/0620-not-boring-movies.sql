# Write your MySQL query statement below
select *
from Cinema
where id%2 !=0
And description != 'boring'
order by rating desc