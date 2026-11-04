# Write your MySQL query statement count(dept_id)as cntbelow
select teacher_id, count(distinct(subject_id)) as cnt
from Teacher
group by teacher_id