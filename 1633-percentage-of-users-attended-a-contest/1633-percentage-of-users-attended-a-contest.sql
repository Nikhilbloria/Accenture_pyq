# Write your MySQL query statement below
select r.contest_id, round(count(r.user_id)*100.0/(select count(*) from Users),2) as percentage
from Register r
group by r.contest_id
order by percentage desc , r.contest_id asc

-- SELECT
--     r.contest_id,
--     ROUND(COUNT(r.user_id) * 100.0 / (SELECT COUNT(*) FROM Users), 2) AS percentage
-- FROM Register r
-- GROUP BY r.contest_id
-- ORDER BY percentage DESC, r.contest_id ASC;