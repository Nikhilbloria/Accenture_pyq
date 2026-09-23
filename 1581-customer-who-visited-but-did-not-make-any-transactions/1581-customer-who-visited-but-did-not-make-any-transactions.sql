# Write your MySQL query statement below
select v.customer_id, count(customer_id) as
count_no_trans
from Visits v
Left join Transactions t
On v.visit_id = t.visit_id
Where t.transaction_id is null
Group by v.customer_id