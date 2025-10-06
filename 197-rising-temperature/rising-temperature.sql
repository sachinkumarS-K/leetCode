# Write your MySQL query statement below
select w.id
from Weather w
join weather w1
 ON DATEDIFF(w.recordDate, w1.recordDate) = 1
WHERE w.temperature > w1.temperature;