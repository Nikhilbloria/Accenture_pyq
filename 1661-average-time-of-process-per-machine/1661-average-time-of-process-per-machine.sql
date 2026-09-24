# Write your MySQL query statement below
select a.machine_id, round(avg(b.timestamp-a.timestamp),3) as processing_time
From Activity a
Inner join Activity b
On a.process_id = b.process_id
And a.machine_id = b.machine_id
AND a.activity_type = 'start'
AND b.activity_type = 'end'
group by a.machine_id 
