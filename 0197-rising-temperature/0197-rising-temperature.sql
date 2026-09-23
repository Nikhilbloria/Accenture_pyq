# Write your MySQL query statement below
Select w1.id
From Weather w1
JOIN Weather w2
where DATEDIFF(w1.recordDate,w2.recordDate) = 1
ANd w1.temperature > w2.temperature;

#it is like loop inside loop 
#w1 row1 will be compared to w2 full rows
#then w2 row2 will be compared to w2 full rows